#include <iostream>

using std::cout;
using std::endl;

double funcion(double x,double y){
	return -y;
}
double funcion_2(double x, double z){
	return z;
}

int main(){
  double x = 0.0;
  double y = 1.0;
  double h = 0.1;
  double z = 0.0;
  int N = 10/h;
  double k1_z; 
  double k2_z; 
  double k3_z; 
  double k4_z; 
  double k1_y; 
  double k2_y; 
  double k3_y; 
  double k4_y; 
  

  for(int i=0; i<N;i++){   
    
    k1_z = funcion(x,y);
    k2_z = funcion(x+h/2.0 , y+(h/2.0)*k1_z);
    k3_z = funcion(x+h/2.0 , y+(h/2.0)*k2_z );
    k4_z = funcion(x+h,y+h*k3_z);
    
    k1_y = funcion_2(x,z);
    k2_y = funcion_2(x+h/2.0 , z+(h/2.0)*k1_y);
    k3_y = funcion_2(x+h/2.0 , z+(h/2.0)*k2_y);
    k4_y = funcion_2(x+h,z+h*k3_y);

    y = y+(h/6.0)*( k1_y + 2*k2_y + 2* k3_y + k4_y );
    z = z+(h/6.0)*( k1_z + 2*k2_z + 2* k3_z + k4_z );

    x = x+h; 

    cout<<x<<" "<<y<<endl;
  }

  return 0;
}
