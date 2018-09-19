import math

while True:
    try:
        x, y = map(int, input().split())
    except EOFError:
        break
    print (math.factorial(x)+math.factorial(y))
