def solution(arr):
    a = []
    
    if 2 not in arr:
        return [-1]
    
    for i,k in enumerate(arr):
        if arr[i] == 2:
            a.append(i)
        
    return arr[min(a):max(a)+1]