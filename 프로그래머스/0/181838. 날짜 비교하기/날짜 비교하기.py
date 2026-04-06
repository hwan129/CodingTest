def solution(date1, date2):
    
    for i, k in enumerate(date1):
        print(k, date2[i])
        if k < date2[i]:
            return 1
        elif k > date2[i]:
            return 0
    return 0