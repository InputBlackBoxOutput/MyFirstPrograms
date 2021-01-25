# Program to find the partial derivative of the following equation:
# f(x,y,z) = 4xy + x^3 + z^8y w.r.t x
# Answer: 3x^2 + 4y

import sympy as spy
x,y,z = spy.symbols('x y z')
fxn = (4*x*y) + (x**3) +(z**(8*y))

op = spy.diff(fxn, x)
print(op)