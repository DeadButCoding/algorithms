def search(arr, curr_index, key):
    
    if curr_index == -1:
        return -1
    
    if arr[curr_index] == key:
        return curr_index
    
    return search(arr, curr_index-1, key)