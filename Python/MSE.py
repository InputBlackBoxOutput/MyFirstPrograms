# Program to compute the Half Mean Square Error loss for a linear regression model
# Training data: (h(x)=wx+b): x=[3,2,4,0] where w=1 and b=1 y=[4,1,3,1] 

w = 1
b = 1
x = [3,2,4,0]
y = [4,1,3,1]
h=[]

for each in x:
    h.append((w * each + b))

print('Predicted output :', h)

def loss_fxn(y,h):
    N = len(y)
    s = 0
    for i in range(0,N):
        s += (y[i] - h[i])**2
    
    return s/(2*N)

print('Output of loss_fxn:', loss_fxn(y, h))