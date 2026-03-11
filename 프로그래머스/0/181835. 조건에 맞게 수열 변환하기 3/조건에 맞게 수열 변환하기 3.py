def solution(arr, k):
    answer = []
    
    if k % 2 == 0: # 짝수
        return [i + k for i in arr]
    else: # 홀수
        return [i * k for i in arr]
    
    return answer