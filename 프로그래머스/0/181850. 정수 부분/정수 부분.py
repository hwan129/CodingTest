def solution(flo):
    answer = ''
    dot = 0
    
    for i in range(len(str(flo))):
        if str(flo)[i] == '.':
            break
        answer += str(flo)[i]
        
    return int(answer)