import matplotlib.pyplot as plt
import numpy as np
import scipy.integrate as integrate

#[-2, 3]
# f(x) = x^3 + x^2
# phi0 = x
# phi1 = x^2
#----[Gram Schmidt]----
# phi0' = phi0 = x
# phi1' = x^2 - 1.392857

a_0 = integrate.quad(lambda x: (x**3 + x**2)*x, -2, 3)[0] / integrate.quad(lambda x: x**2, -2, 3)[0]
a_1 = integrate.quad(lambda x: (x**3 + x**2)*(x**2 - 1.392857), -2, 3)[0] / integrate.quad(lambda x: (x**2 - 1.392857)**2, -2, 3)[0]

input = np.linspace(-10, 10, 100)
cos_values = input**3 + input**2
aprox_output = a_0*input + a_1*(input**2 - 1.392857)

plt.plot(input, cos_values, label='x^3 + x^2')
plt.plot(input, aprox_output, color='red', label='Aprox')
plt.axvline(x=-2, ymin=0.40, ymax=0.55, ls='--', color='black')
plt.axvline(x=3, ymin=0.40, ymax=0.55, ls='--', color='black')
plt.legend()
plt.title('extended range')
plt.show()

input = np.linspace(-2, 3, 100)
cos_values = input**3 + input**2
aprox_output = a_0*input + a_1*(input**2 - 1.392857)

plt.plot(input, cos_values, label='x^3 + x^2')
plt.plot(input, aprox_output, color='red', label='Aprox')
plt.legend()
plt.title('small range')
plt.show()