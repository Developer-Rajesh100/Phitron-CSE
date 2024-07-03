def count_split(s):
    cnt = 0
    split_strings = []
    current = ""

    for char in s:
        current += char

        if char == 'L':
            cnt += 1
        elif char == 'R':
            cnt -= 1
        if cnt == 0:
            split_strings.append(current)
            current = ""

    return len(split_strings), split_strings


inp_string = input()
count, splits = count_split(inp_string)

print(count)
for split in splits:
    print(split)
