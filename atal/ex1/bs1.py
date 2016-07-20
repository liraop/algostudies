def binarySearch(elem, array):
    min = 0
    max = len(array)

    if (elem < array[min]):
        return 1

    while min <= max:
        pivot = (min + max) / 2

        if (elem == array[pivot]):
            return -1

        if (elem > array[pivot]):
            min = pivot+1
        if (elem < array[pivot]):
            max = pivot-1

n = int(raw_input())
array = raw_input().split(' ')
intarray = [int(num) for num in array]

m = int(raw_input())
array = raw_input().split(' ')
tobefound = [int(num) for num in array]


for num in range(m):
    if binarySearch(tobefound[num], intarray) == -1:
        print tobefound[num], ": achou"
    else:
        print tobefound[num], ": nao achou"
