def solution(strArr):
    answer = 0
    count = [0] * 31
    
    for i in strArr:
        count[len(i)] += 1
        
    return max(count)