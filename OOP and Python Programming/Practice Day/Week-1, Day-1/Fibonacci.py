def fibonacci(num):
    a = 0
    b = 1

    if num == 0:
        return a
    for _ in range(2, num+1):
        c = a + b
        a = b
        b = c
    return b


num = int(input())

res = fibonacci(num)
print(res)