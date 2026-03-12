def solution(myString):
    answer = "".join(['l' if i < 'l' else i for i in myString])
    
    # for i in range(len(myString)):
    #     if myString[i] < 'l':
    #         answer += myString.replace(myString[i], 'l')
    
    
    return answer