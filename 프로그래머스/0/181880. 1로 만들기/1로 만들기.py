def solution(num_list):
    answer = 0
    
    for i in num_list:
        count = 0
        while 1:
            if i == 1:
                break
            if i % 2:
                i -= 1
            else:
                i /= 2
                count += 1
            
        answer += count
    return answer