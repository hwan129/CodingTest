def solution(arr, flag):
    answer = []
    
    for i, k in enumerate(flag):
        if k:
            for j in range(arr[i]*2):
                answer.append(arr[i])
        else:
            for j in range(arr[i]):
                answer.pop()
            # del answer[-2:]
        # print(answer)
                
    
    return answer