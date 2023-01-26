import re


j=0
a=0

x=input()

def check(s):
    if(re.match("[A-Z]{1}[AEIOU]{1}[A-Z]{1}[0-5]{6}[0-5]{1}",s)):
        return True
    else:
        return False    

for i in range(len(x)):
    if (x[i]==" "):
        if(check(x[j:i])):
            print(x[j:i])
            a=1
        j=i+1
if(a==0):
    print("NIL")        