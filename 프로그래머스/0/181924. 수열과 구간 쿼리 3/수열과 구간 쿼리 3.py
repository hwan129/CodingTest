def solution(arr, queries):
    
    for i in queries:
        term = arr[i[0]]
        arr[i[0]] = arr[i[1]]
        arr[i[1]] = term
    
    return arr