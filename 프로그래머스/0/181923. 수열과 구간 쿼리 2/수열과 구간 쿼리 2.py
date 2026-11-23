def solution(arr, queries):
    answer = []
    
    for a,j in enumerate(queries):
        s = j[0]
        e = j[1]
        k = j[2]
        answer.append(min((x for x in arr[s:e + 1] if x > k), default=-1))
            
    
    return answer