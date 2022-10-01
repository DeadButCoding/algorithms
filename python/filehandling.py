# a file named "hello", will be opened with the reading mode.
with open('hello.txt', 'r') as file:
    # This will print every line one by one in the file
    for line in file:
        print(line, end="")
