def solution(todo_list, finished):
    answer = []
    
    # for i, k in enumerate(finished):
    #     if not k:
    #         answer.append(todo_list[i])
    
    
    return [todo_list[i] for i, k in enumerate(finished) if not k]