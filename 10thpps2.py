def checkpalindrome(s):
    i=0
    j=len(s)-1
    while(i<j):
        if(s[i].lower()!=s[j].lower()):
            return False
        i+=1
        j-=1
    return True

a=input()
i=0
j=i+1
maxi=0
if (a.isalpha()):
    while (i<len(a)):
        j=i+1
        while (j<len(a)):
            # print(a[i:j+1])
            if(checkpalindrome(a[i:j+1])):
                if(j-i>=maxi):
                    maxi=j-i    
            j+=1
        i+=1
    print(maxi+1) 
else:
    print("invalid input")   

# a= 'adbabd@#'
# print(a.islower())