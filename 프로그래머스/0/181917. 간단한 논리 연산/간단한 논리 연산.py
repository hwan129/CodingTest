def solution(x1, x2, x3, x4):
    return downside(upside(x1, x2), upside(x3, x4))

def upside(a, b):
    if a or b:
        return True
    else:
        return False

def downside(a, b):
    if a and b:
        return True
    else:
        return False