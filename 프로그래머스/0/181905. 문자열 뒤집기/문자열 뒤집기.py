def solution(my_string, s, e):
    answer = ''
    reverse_str = my_string[s:e+1][::-1]
    
    for i in range(len(my_string)):
        if i > s and i < e + 1:
            continue
        elif i == s:
            answer += reverse_str
        else:
            answer += my_string[i]
        
    return answer