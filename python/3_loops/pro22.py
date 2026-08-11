a=[14,12,18,0,5,7]
i=0
b=1
# while(i<6):
#     if (a[i]!=0):
#         print(a[i])
#     else:
#         continue
#     i+=1

for i in a:
    if i == 0:
        continue
    
    # print(i)
    b *= i

print(b)
        