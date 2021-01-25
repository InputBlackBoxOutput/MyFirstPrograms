# Program to read and write to a file

def readFile(lineNo =None, upToChar = None):
    try:
        with open('text.txt','rt') as fin:
            if lineNo == None and upToChar == None:
                data = fin.readlines()
    
            elif(lineNo != None):
                for i in range(0,lineNo):
                    data = fin.readline()
            
            elif(upToChar != None):
                data = fin.read(upToChar)
                
            print(data)
        fin.close()
    
    except FileNotFoundError:
        print('Error: File does not exist')
    except:
        print('Something went wrong!')
    
def writeFile(line=None):
    try:
        # Opening file in append mode!
        with open('text.txt','at') as fin:   
            if line !=None:
                fin.write(line)
            else:
                print('No line to write')
    
    except FileNotFoundError:
        print('Error: File does not exist')
    except:
        print('Something went wrong!')



print('1) Reading entire file :\n')
readFile()
print()

print('2) Reading line 3 :\n')
readFile(lineNo=3)

print('3) Reading first 20 characters :\n')
readFile(upToChar=20)
print()

print('4) Writing to the file')
l = '\n This line is newly added to the file'
writeFile(line=l)
readFile()
