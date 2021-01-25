# Program to read the text in the file and count vowels. 
# The program also computes the time elapsed from the instant file is opened till the last vowel is counted.
import time

# Helper function/method
def isVovel(c):
    c.lower()
    if c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u':
        return True
    else:
        return False
    
def vovelCounter():
    count = 0
    then = time.perf_counter()
    
    with open('text.txt','rt') as fin:
        data = fin.readlines()
        
        for each in data:
            for i in range(0,len(each)):
                if(isVovel(each[i])):
                    count +=1
    fin.close()
    now = time.perf_counter()
    
    print(f'Number of vovels: {count}')
    print(f'Time Taken for proceesing: {now-then} s')
           

vovelCounter()