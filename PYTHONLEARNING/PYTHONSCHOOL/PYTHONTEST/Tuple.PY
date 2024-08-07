def swap(lst, i, j):
    temp = lst[i]
    lst[i] = lst[j]
    lst[j] = temp
    return lst


def bubble_sort(lst):
    n = len(lst)
    count = 0  
    print(f"Before : {lst}")
    
    for i in range(n-1):
        for j in range(0, n-i-1):
            count += 1  
            if lst[j] > lst[j+1]:
                swap(lst, j, j+1)
                
        print(f"Round No {i + 1} : {lst}")
        
    return lst, count


lst = [64, 34, 25, 12, 22, 11, 90]
sorted_arr, rounds = bubble_sort(lst)
print("Sorted list :", sorted_arr)
print("Number of rounds:", rounds)
