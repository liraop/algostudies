def max_subarray_sum_trivial(a):
    max_sum = 0

    for i in range(0, len(a)):
        for j in range(i, len(a)+1):
            sum = 0
            for k in range(i, j):
                sum += a[k]
                if sum > max_sum:
                    max_sum = sum
    print(max_sum)


def max_subarray_sum_improved(a):
    previous_sum = a[0]

    for i in range(0, len(a)):
        actual_sum = 0
        for j in range(i, len(a)):
            actual_sum += a[j]
            if actual_sum >= previous_sum:
                previous_sum = actual_sum
            else:
                i += 1

    print(previous_sum)


a = [1, -2, 1, 2, -5, -5, -6, 1]
b = [1, -2, -4, 5, 6]

max_subarray_sum_trivial(a)
max_subarray_sum_improved(a)

max_subarray_sum_trivial(b)
max_subarray_sum_improved(b)
