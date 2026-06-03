def solution(myStr):
    answer = []
#     str = ""
    
#     for i in myStr:
#         if 'a' in i or 'b' in i or 'c' in i:
#             answer.append(str)
#             str = ""
#             continue
#         str += i
#     answer.append(str)
    
#     while "" in answer:
#         answer.remove("")
        
#     if answer == []:
#         return ["EMPTY"]

    answer= myStr.replace('a', ' ').replace('b', ' ').replace('c', ' ').split()
        
    return answer if answer else ["EMPTY"]