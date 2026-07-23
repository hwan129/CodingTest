def solution(arr):
    answer = 0
    
    while 1:
        old_arr = arr.copy()
        for i, k in enumerate(arr):
            if k >= 50 and k % 2 == 0:
                arr[i] = int(k/2)
            elif k < 50 and k % 2 != 0:
                arr[i] = int(k * 2 + 1)
        if old_arr == arr:
            return answer
        answer += 1
