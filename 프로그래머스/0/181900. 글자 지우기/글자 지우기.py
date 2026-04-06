def solution(my_string, indices):
    answer = ''
    a = 0
    indices.sort()
    
    for i, k in enumerate(my_string):
        if i not in indices:
            answer += k
    
    return answer