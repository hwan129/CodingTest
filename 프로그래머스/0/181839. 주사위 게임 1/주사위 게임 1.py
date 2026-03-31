def solution(a, b):
    if a % 2 == 0 and b % 2 == 0: # 짝수
        return a-b if a > b else b-a
    elif a % 2 != 0 and b % 2 != 0: # 홀수
        return a*a + b*b
    else:
        return 2*(a+b)
        