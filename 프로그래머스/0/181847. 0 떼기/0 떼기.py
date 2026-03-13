def solution(n_str):
    answer = ''
    x = 0
    
    for i in n_str:
        if i != '0' or x == 1:
            x = 1
            answer += i
            
        
    return answer