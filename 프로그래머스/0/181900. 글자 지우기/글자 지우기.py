def solution(my_string, indices):
    answer = ''
    a = 0
    indices.sort()
    
    for i, k in enumerate(my_string):
        if i == indices[a]:
            print(i, indices[a])
            if a < len(indices) - 1 :
                a += 1
            continue
        answer += k
    
    return answer