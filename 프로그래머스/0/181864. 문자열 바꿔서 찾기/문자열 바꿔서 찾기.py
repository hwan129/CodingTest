def solution(myString, pat):
    answer = 0
    str = ""
    
    for i in range(len(myString)):
        if myString[i] == 'A':
            str += 'B'
        elif myString[i] == 'B':
            str += 'A'
    
    print(str, pat)
    
    if pat in str:
        return 1
    else:
        return 0
