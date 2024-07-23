N = int(input())
arr= []

for _ in range(N):
    num = int(input())
    arr.append(num)

if N > 0:
    minind = (arr.index(min(arr)))
    maxind = (arr.index(max(arr)))

    arr[minind], arr[maxind] = arr[maxind], arr[minind]

print(arr)