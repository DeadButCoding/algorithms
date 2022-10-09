def countingSort(arr, exp):

	n = len(arr)

	output = [0] * (n)

	count = [0] * (10)

	for i in range(0, n):
		index = (arr[i]/exp)
		count[int((index)%10)] += 1

	for i in range(1,10):
		count[i] += count[i-1]

	i = n-1
	while i>=0:
		index = (arr[i]/exp)
		output[ count[ int((index)%10) ] - 1] = arr[i]
		count[int((index)%10)] -= 1
		i -= 1
	
	i = 0
	for i in range(0,len(arr)):
		arr[i] = output[i]

def radixSort(arr): # method for RadixSort

	max1 = max(arr)

	exp = 1
	while max1/exp > 0:
		countingSort(arr,exp)
		exp *= 10

arr = [ 87, 23, 91, 8721, 64, 1, 21, 69]
radixSort(arr)

for i in range(len(arr)):
	print(arr[i],end=" ")
