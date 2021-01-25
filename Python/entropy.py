# Program to compute entropy of a symbol
import math as m
import numpy as np

# s1 = ['A','B','C','D']
p1 = [0.25,0.25,0.25,0.25]
# s2 = ['A','B']
p2 = [0.5,0.5]

def entropy(prob):
    p = np.array(prob)
    p = p * (np.log(1/p) / m.log(2))
        
    return p.sum()

print('Entropy of source with p1 as probablity: ', entropy(prob=p1))
print('Entropy of source with p2 as probablity: ', entropy(prob=p2))