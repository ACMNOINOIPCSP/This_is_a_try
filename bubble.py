def selection_sort(list1):   
    num_list = num_list
    size = len(num_list)
    for i in range(size):
        for j in range(i,size):
            if num_list[i] < num_list[j]: 
                num_list[i],num_list[j] = num_list[j],num_list[i] 
    print(num_list)

def bubble_sort(list1:int):   
    num_list = list1
    size = len(num_list)
    for i in range(size):
        for j in range(size-i-1):
            if num_list[j] < num_list[j+1]:
                num_list[j],num_list[j+1] = num_list[j+1],num_list[j]
    print(num_list)
    
bubble_sort([1,39,8,7,5])
