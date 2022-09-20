

from os import remove
from pickle import FALSE
str=input()
str=list(str)
t=False
while t == False:
    if "<" in str:
        a=str.index("<")
        str.remove(str[a-1])
        str.remove("<")
    else:
        t=True
str=''.join(str)
print(str)
    
    