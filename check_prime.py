a = int(input())
i = 2
flag = true
while i*i <= n:
    if n % i == 0:
        print(f"{a}不是素数")
        flag = false
if a == 0 or a == 1:
    print(f"{a}不是素数")
else flag:
    print(f"{a}是素数")
 
  

