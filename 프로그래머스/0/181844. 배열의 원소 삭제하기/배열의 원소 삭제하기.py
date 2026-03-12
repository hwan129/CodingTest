def solution(arr, delete_list):
    answer = []
    
#     for i in range(len(delete_list)):
#         for j in range(len(arr)):
#             if delete_list[i] == arr[j]:
#                 del arr[j]
#                 break

    for i in delete_list:
        if i in arr:
            arr.remove(i)

    return arr