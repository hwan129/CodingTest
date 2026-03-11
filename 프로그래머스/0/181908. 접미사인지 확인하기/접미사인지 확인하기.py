def solution(my_string, is_suffix):
    answer = 0
    
    for i in range(len(is_suffix)):
        if my_string[len(my_string) - len(is_suffix):] == is_suffix:
            return 1
    
    return answer