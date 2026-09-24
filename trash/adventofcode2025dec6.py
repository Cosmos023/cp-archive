# cook your dish here

l = []
k = 5;
while(k):
    k-=1
    l.append(input());
k = 5;
# for a in l:
#     print(len(a))
y = 0;
ans=0
y = 0
op = '*'
for i in range(len(l[0])):
    if(l[0][i]==' ' and l[1][i]==' ' and l[2][i]==' ' and l[3][i]==' '):
        ans+=y
        # op = l[k-1][i][0]
        y = 0;
        continue
    n = ""
    for j in range(k-1):
        # print("l[j][i]",l[j][i])
        if(l[j][i]==' '):
            continue
        n+=l[j][i];
    # print(n)
    # op = ''
    if(y==0):
        op = l[k-1][i][0]
        if(op=='*'):
            y = 1;
    if(op=='+'):
        y+=int(n)
    else:
        y*=int(n)
    # print(ans, "ans")
    # print(y, "y")

ans+=y
print(ans)
# m = []
# for a in l:
#     m.append(a.split())
# n = len(m[0])
# # print(n)
# ans  = 0

# for i in range(n):
#     y = -19;
    
#     # print("m[i][k-1][0]",m[k-1][i][0])
#     if(m[4][i][0]=='+'):
#         # print("m[0][i]",m[0][i])
#         y = int(m[0][i])+int(m[1][i])+int(m[2][i])+int(m[3][i]);
#     else:
#         y = int(m[0][i])*int(m[1][i])*int(m[2][i])*int(m[3][i]);
#     # print(y)
#     ans+=y
# print(ans);
# #     print(a);