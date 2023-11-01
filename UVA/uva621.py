n = input()
for i in range(int(n)):
    result = str(input())

    if (result == "1" or result == "4" or result == "78"):
        print("+")
    elif (result[-2:] == "35"):
        print("-")
    elif (result[0] == "9"):
        print("*")
    elif (result[:3] == "190"):
        print("?")
