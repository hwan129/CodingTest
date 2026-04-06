def solution(numLog):
    answer = ''
    
    for i, k in enumerate(numLog):
        if i == len(numLog) - 1:
            break
        if numLog[i+1] - k == 1:
            answer += 'w'
        if numLog[i+1] - k == -1:
            answer += 's'    
        if numLog[i+1] - k == 10:
            answer += 'd'
        if numLog[i+1] - k == -10:
            answer += 'a'
            
    return answer