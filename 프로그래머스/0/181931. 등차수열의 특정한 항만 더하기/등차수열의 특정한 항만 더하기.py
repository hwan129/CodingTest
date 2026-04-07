def solution(a, d, included):
    answer = 0
    
    for i, k in enumerate(included):
        if k:
            answer += a
        a += d
    
    return answer