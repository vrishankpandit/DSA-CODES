# import math
# # a=[{"ajay":27},{"Sanjay":28},{"Prathap":15}, {"Vikrant":27}]
# a=eval(input())
# c={}
# for dicti in a:
#     for k,v in dicti.items():
#         c[k]=v
# print(c)
# l1=list(c.keys())
# l2=list(c.values())
# l3=[]
# l4=[]
# f=""
# e={}
# for i in range(len(l1)):
#     if(l2.count(l2[i])>1):
#         f+=l1[i]
#         del c[l2[i]]
    

        

# for i in range (len(b)):
#     if (b.count(b[i])>1):
#         print(list(c.keys())[i])
#         f+=(list(c.keys())[i])
#     else:
#         e[list(c.keys())[i]]=list(c.values())[i]
# e[f]=int(pow(b[i],1/3))            
# # del c[list(c.keys())[i]]
# print(f)
# print(e)




a=eval(input())
name=[]
age=[]
for i in range(len(a)):
    for j in a[i].keys():
        name.append(j)
    for j in a[i].values():
        age.append(j)
for i in range(len(age)):
    if type(age[i])==str:
        temp=age[i]
        age[i]=name[i]
        name[i]=temp
for i in range(len(age)):
    for j in range(i+1,len(age)):
        if age[i]==age[j]:
            name[i]=name[i]+name[j]
            name[j]=""
            age[j]=""
            age[i]=int(age[i]**(1/3))
for i in range(len(age)):
    for j in range(i+1,len(age)):
        if name[i]==name[j]:
            name[j]=""
            age[i]=str(age[i])+str(age[j])
            age[j]=""
a2=[]
for i in range(len(age)):
    d={}
    if(age[i]!=""):
        d.update({name[i]:age[i]})
        a2.append(d)
print(a2)


        
            
















# a={342:42,90:20}
# l=list(a.values())
# print(l)
# l=[27,28,90,27]
# print(l.count(27))