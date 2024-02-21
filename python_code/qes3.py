def mean(lst):
    return sum(lst) / len(lst)

def mode(lst):
    return max(set(lst), key=lst.count)

def median(lst):
    n = len(lst)
    if n % 2 == 0:
        return (lst[n//2 - 1] + lst[n//2]) / 2
    else:
        return lst[n//2]

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print(f"Mean: {mean(numbers)}")
print(f"Mode: {mode(numbers)}")
print(f"Median: {median(numbers)}")
print("range",len(numbers))