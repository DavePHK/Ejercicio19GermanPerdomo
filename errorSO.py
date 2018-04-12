import numpy as np
import matplotlib.pyplot as plt

datosn = np.loadtxt('datos1902.txt')
x=datosn[:,0]
datost = np.cos(x)

error=np.abs((datosn[:,1]-datost)/datost)
plt.figure()
plt.xlabel('x')
plt.ylabel('Error')
plt.title('Error segundo orden')
plt.plot(x,np.log10(error))
plt.savefig('error_segundoorden.pdf')

