# x=input()
# b=x.replace('a',"")
# c=b.replace('e',"")
# d=c.replace('i',"")
# e=d.replace('o',"")
# f=e.replace('u',"")
# print(f)

x=input()
vowels="aeiouAEIOU"
output=""
for ch in x:
  if ch not in vowels:
    output+=ch
print(output)
