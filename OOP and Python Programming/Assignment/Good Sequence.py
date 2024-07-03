n = int(input())
nums_arr = list(map(int, input().split()))
nums_dict = {}
cnt = 0

for num in nums_arr:
    num_key = str(num)
    if num_key in nums_dict:
        nums_dict[num_key] += 1
    else:
        nums_dict[num_key] = 1

for key, val in nums_dict.items():
    key, val = int(key), int(val)
    if key != val:
        if val > key:
            cnt += (val - key)
        else:
            cnt += val

print(cnt)
