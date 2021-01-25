# Program to simulate 2-bit AND, OR & X-OR without using Boolean Operators
def AND(a,b):
    z = a+b
    if z == 2:
        print(f'{a} AND {b} => True')
    else:
        print(f'{a} AND {b} => False')
        
def OR(a,b):
    z = a+b
    if z >= 1:
        print(f'{a} OR {b} => True')
    else:
        print(f'{a} OR {b} => False')
    
def XOR(a,b):
    z = a+b
    if z == 1:
        print(f'{a} XOR {b} => True')
    else:
        print(f'{a} XOR {b} => False')


print('AND gate:')
AND(True,False)
AND(True,True)

print('\nOR gate:')
OR(True,False)
OR(False,False)

print('\nXOR gate:')
XOR(True,True)
XOR(True,False)