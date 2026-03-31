def solution(arr1, arr2):
    if len(arr1) != len(arr2): # 길이가 다른 경우
        return 1 if len(arr1) > len(arr2) else -1
    
    # 길이가 같은 경우
    if sum(arr1) != sum(arr2):
        return 1 if sum(arr1) > sum(arr2) else -1
    
    # 합이 같은 경우
    return 0