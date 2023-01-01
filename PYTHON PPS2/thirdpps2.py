import cmath

a=eval(input())

def checkprime(x):
    if(x>1):
        for i in range (2,x):
            if (x%i==0):
                return False
        return True
    else:
        return False    

def reversestring(s):
    return s[::-1]

def checkpalindrome(s):
    i=0
    j=len(s)-1
    while(i<j):
        if(s[i].lower()!=s[j].lower()):
            return False
        i+=1
        j-=1
    return True

def realcomplexswitch(x):
    z=complex(x.imag,x.real)
    return z

def negateinteger(x):
    return -x

def conjugatecomplex(x):
    z=complex(x.real,-x.imag)
    return z

listype=0
numtype=0
complextype=0
palindrome=0
prime=0
for i in a:
    if (type(i)==str):
        if (checkpalindrome(i)):
            palindrome=1
        listype+=1
    elif (type(i)==int):
        if (checkprime(i)):
            prime=1
        numtype+=1    
    else:
        complextype+=1

if(palindrome==1 and prime==1):
    print(a[(len(a)-1)//2])
elif(prime==1):
    b=[]
    for n in a:
        if (type(n)==str):
            c=reversestring(n)
            b.append(c)
        elif (type(n)==int):
            b.append(n)
        else:
            d=realcomplexswitch(n)
            b.append(d)
    print(b)            
elif(palindrome==1):
    b=[]
    for n in a:
        if (type(n)==str):
            b.append(n)
        elif (type(n)==int):
            c=negateinteger(n)
            b.append(c)
        else:
            d=conjugatecomplex(n)
            b.append(d)
    print(b) 
else:
    for i in a:
        l2=[]
        if (type(i)==str):
            for j in list(i):
                l2.append(j)
        else:
            l2.append(i)        
    print(l2)   

# ["Hello", "Python", 3, 25, (-1+7j)]
# ["Malayalam",(3+3j),(7-2j),"CSE",7]