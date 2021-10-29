import matplotlib.pyplot as plt
import numpy as np
import scipy.integrate as integrate

#[0, 4]
# f(x) = xcos(x)
# phi1 = 1
# phi2 = x
# phi3 = x^2


a = np.array([[integrate.quad(lambda x: 1, 0, 4)[0], integrate.quad(lambda x: x, 0, 4)[0], integrate.quad(lambda x: x*x, 0, 4)[0]], 
              [integrate.quad(lambda x: x, 0, 4)[0], integrate.quad(lambda x: x*x, 0, 4)[0], integrate.quad(lambda x: x*x*x, 0, 4)[0]], 
              [integrate.quad(lambda x: x*x, 0, 4)[0], integrate.quad(lambda x: x*x*x, 0, 4)[0], integrate.quad(lambda x: x*x*x*x, 0, 4)[0]]])

b = np.array([integrate.quad(lambda x: x*np.cos(x), 0, 4)[0], integrate.quad(lambda x: x*x*np.cos(x), 0, 4)[0], integrate.quad(lambda x: x*x*x*np.cos(x), 0, 4)[0]])
constants = np.linalg.solve(a, b)

input = np.linspace(-10, 10, 100)
cos_values = input*np.cos(input)
aprox_output = constants[0] + constants[1]*input + constants[2]*input*input

plt.plot(input, cos_values, label='x*cos(x)')
plt.plot(input, aprox_output, color='red', label='Aprox')
plt.axvline(x=0, ymin=0.50, ymax=0.75, ls='--', color='black')
plt.axvline(x=4, ymin=0.50, ymax=0.75, ls='--', color='black')
plt.legend()
plt.title('extended range')
plt.show()

input = np.linspace(0, 4, 100)
cos_values = input*np.cos(input)
aprox_output = constants[0] + constants[1]*input + constants[2]*input*input

plt.plot(input, cos_values, label='x*cos(x)')
plt.plot(input, aprox_output, color='red', label='Aprox')
plt.legend()
plt.title('small range')
plt.show()