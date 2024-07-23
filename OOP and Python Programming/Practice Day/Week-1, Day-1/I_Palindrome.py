def isPalindrome (num):
    if str(num) == str(num)[::-1]:
        print(str(num))
        print("YES")
    else:
        print(str(num))
        print("NO")

num = input()

remove_zeros = [n.lstrip("0") for n in num]

rev = remove_zeros[::-1]
while '' in rev:
    rev.remove('')

isPalindrome(''.join(rev))
