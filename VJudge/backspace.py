from operator import index


str=input()
count, n= 0,0
str=list(str)

while n < len(str):
    i=str[n]
    aux=str.index(i)
    if i == "<":
        str.remove(str[aux-1])
        str.remove(str[aux-1])
        n-=2
    n+=1
str=''.join(str)
print(str)



