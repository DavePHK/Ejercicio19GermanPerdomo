import numpy as np
import matplotlib.pyplot as plt

datosn = np.loadtxt('datos1901.txt')
x=datosn[:,0]
datost = np.exp(-x)

error=np.abs((datosn[:,1]-datost)/datost)
plt.figure()
plt.xlabel('x')
plt.ylabel('Error')
plt.title('Error primer orden')
plt.plot(x,np.log10(error))
plt.savefig('error_primerorden.pdf')

