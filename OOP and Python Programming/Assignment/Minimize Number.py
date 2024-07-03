n = int(input())
arr = list(map(int, input().split()))

cnt = 0
while True:
    flag = True
    for i in arr:
        if i % 2 == 1:
            flag = False
    if flag == False:
        break
    for i in range(len(arr)):
        arr[i] = arr[i] / 2
    cnt += 1

print(cnt)
