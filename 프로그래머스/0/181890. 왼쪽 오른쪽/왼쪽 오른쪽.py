def solution(str_list):
    answer = []
    mode = 0
    
    for i in str_list:
        if i == "l" and mode == 0:
            return answer
        elif i == "r" and mode == 0:
            answer = []
            mode = 1
            continue
        answer.append(i)
    
    if mode == 1:
        return answer
    
    return []