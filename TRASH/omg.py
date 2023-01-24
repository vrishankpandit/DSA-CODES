import re

a="GCCAGCTAGCTAGCTAGCTAGCTAGCTAGCTTTTGGGAGCTAGCTAGCTG"
c=""
b=re.findall('AGCT',a)
d=re.findall('AGCT',c)
print(b)