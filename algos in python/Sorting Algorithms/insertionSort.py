class InsertionSort:
    
    def __init__(self):
        print("Insertion Sort Algorithm is Initialized")

    def __call__(self, arr):
        for i in range(1, len(arr)):
            key_item = arr[i]

            j = i - 1

            while j >= 0 and arr[j] > key_item:
                arr[j + 1] = arr[j]
                j -= 1

            arr[j + 1] = key_item

        return arr