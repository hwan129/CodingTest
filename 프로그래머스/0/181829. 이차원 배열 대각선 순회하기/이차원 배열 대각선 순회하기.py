def solution(board, k):
    answer = 0

    for i, key in enumerate(board):
        if k-i+1 < 0:
            break
        answer += sum(key[:k-i+1])
        print(key[:k-i+1])
    
    return answer