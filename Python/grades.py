# Program to assign grades
# If <35%             F
# Between 35 to 50 %  D
# Between 50 to 60 %  C
# Between 60 to 75 %  B
# If >75%             A

def percentage(p):
    if p < 35:
        print('F')
    elif p >= 35 and p < 50:
        print('D')
    elif p >= 50 and p < 60:
        print('C')
    elif p >= 60 and p < 75:
        print('B')
    else:
        print('A')
        
percentage(25) # F
percentage(65) # B
percentage(95) # A