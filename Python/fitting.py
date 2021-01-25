# Program for curve fitting/function approximation
x = [8,2,11,6,5,4,12,9,6,1]
y = [3,10,3,6,8,12,1,4,9,14]

def mean(ip):
    sum = 0
    for each in ip:
        sum += each
    return sum/len(ip)

def fit_line():
    N = 0
    D = 0
    
    x_mean = mean(x)
    y_mean = mean(y)
    
    for i in range(0, len(x)):
        N += (x[i]-x_mean)*(y[i]-y_mean)
        
    for i in range(0, len(x)):
        D += (x[i]-x_mean)**2 
    
    m = N/D
    b = y_mean - m * x_mean
    
    return (m,b)


(m,b) = fit_line()
print(f'Slope : {m}')
print(f'Y-intercept : {b}')