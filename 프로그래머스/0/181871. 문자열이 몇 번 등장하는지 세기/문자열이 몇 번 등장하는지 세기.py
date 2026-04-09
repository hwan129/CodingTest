def solution(myString, pat):
    answer = 0
    
    if not pat in myString:
        return 0
    
    for i in range(len(myString)-len(pat)+1):
        if pat == myString[i:len(pat)+i]:
            answer += 1
    
    return answer