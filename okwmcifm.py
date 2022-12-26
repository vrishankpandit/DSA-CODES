a=input().split(",")
b=tuple(a)
for x in b:
    if(len(x)>=6 and len(x)<=12):
        print("in len")
        if(x.islower()==0):
            print("in lower")    
            if(x.isupper()==0):
                print("in upper")
                if(x.isdigit()==0):
                    print("in digit")
                    if(('$' or '#' or '@') in x):
                        print("in $#@")
                        print(x)
                        
