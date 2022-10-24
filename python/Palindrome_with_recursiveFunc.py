def mystreryRecursive(str, s, e):
    if (s == e):
        print("1")
        return True
    


    if (s < e + 1):
        print("3")
        if (str[s] == str[e]):
            print("2")
            return True
        else :
            return False

        return mystreryRecursive(str, s+1, e-1)

    return False

def mystrery(str):
    n = len(str)
    if (n == 0):
        return True

    return mystreryRecursive(str, 0, n-1)

word = str(input())
print(mystrery(word))
