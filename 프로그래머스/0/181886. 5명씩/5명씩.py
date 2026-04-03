def solution(names):
    print(names[::5])
    return [k for i, k in enumerate(names) if i % 5 == 0]