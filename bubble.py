num_list = list(map(int,input().split()))
size = len(num_list)

for i in range(size):
    for j in range(i,size):
        if num_list[i] < num_list[j]: 
            num_list[i],num_list[j] = num_list[j],num_list[i] 

print(num_list)