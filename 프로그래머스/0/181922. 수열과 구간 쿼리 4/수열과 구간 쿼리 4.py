def solution(arr, queries):
    answer = []
    
    for i in queries:
        s, e, k = i
        for j, v in enumerate(arr[s:e+1]):
            if not (j+s) % k:
                arr[j+s] += 1
    return arr