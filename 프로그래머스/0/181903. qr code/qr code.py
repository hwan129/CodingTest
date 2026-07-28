def solution(q, r, code):
    answer = ''
    
    for i, k in enumerate(code):
        if i % q == r:
            answer += k
    
    return answer