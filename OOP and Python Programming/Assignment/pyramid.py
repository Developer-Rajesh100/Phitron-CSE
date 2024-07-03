import pyautogui

num = int(input())

for i in range(1, num+1):
    pyautogui.write(i * "#", interval=0.25)
    pyautogui.press("enter")
