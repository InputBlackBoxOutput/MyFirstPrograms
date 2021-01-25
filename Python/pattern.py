# Program to print a pyramid of the string.

def pyrmd(str):
    s=''
    for i in range(1, len(str)+1):
        s = str[0:i]
        print(s)
    for i in range(len(str)-1, 0, -1):
        s = str[0:i]
        print(s)
    
pyrmd('Python')