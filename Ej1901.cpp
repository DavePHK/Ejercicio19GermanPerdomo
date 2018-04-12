#include <iostream>

using std::cout;
using std::endl;

double funcion(double x,double y){
	return -y;
}


int main(){
  float x = 0.0;
  float y = 1.0;
  float h = 0.1;
  int N = 3/h;
  double k1; 
  double k2; 
  double k3; 
  double k4; 

  for(int i=0; i<N;i++){    
    k1 = funcion(x,y);
    k2 = funcion(x+h/2.0 , y+(h/2.0)*k1);
    k3 = funcion(x+h/2.0 , y+(h/2.0)*k2);
    k4 = funcion(x+h,y+h*k3);

    y = y+(h/6.0)*( k1 + 2*k2 + 2* k3 + k4 );
    x = x+h; 
    cout<<x<<" "<<y<<endl;
  }

  return 0;
}
