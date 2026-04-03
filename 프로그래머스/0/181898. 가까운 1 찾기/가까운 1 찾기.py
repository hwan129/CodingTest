def solution(arr, idx):
    answer = 0
    
    for i, k in enumerate(arr):
        if k and i > idx - 1:
            return i
    
    return -1