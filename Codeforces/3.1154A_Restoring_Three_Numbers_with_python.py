
lst = [int(x) for x in input().split()]
lst.sort()
new_lst=lst.copy()
a=new_lst[3]-new_lst[0]
b=new_lst[3]-new_lst[1]
c=new_lst[3]-new_lst[2]
print(a)
print(b)
print(c)
