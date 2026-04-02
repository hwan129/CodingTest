def solution(binomial):
    blank = 0
    a = ''
    b = ''
    op = ''
    
    for i in binomial:
        if i == ' ':
            blank += 1
        elif blank == 0: # 첫번째 숫자
            a += i
        elif blank == 1: # operator
            op += i
        elif blank == 2: # 두번째 숫자
            b += i
    
    if op == '+':
        return int(a) + int(b)
    if op == '-':
        return int(a) - int(b)
    if op == '*':
        return int(a) * int(b)
