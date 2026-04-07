def solution(arr):
    a = 2
    
    if len(arr) == 1:
        return arr
    
    while 1:
        if len(arr) < a:
            break
        elif len(arr) == a:
            return arr
        a *= 2
    
    for i in range(a - len(arr)):
        arr.append(0)
        
    return arr