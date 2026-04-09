def solution(myString, pat):
    for i in range(len(myString)-len(pat)+1):
        if myString.endswith(pat):
            return myString
        else:
            myString = myString[:-1]
