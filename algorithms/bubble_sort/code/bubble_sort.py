def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr
# --- IGNORE ---
if __name__ == "__main__":
    arr = []
    number = int(input("Enter number of elements: "))
    for i in range(number):
        element = int(input(f"Enter element {i+1}: "))
        arr.append(element)
    print(bubble_sort(arr))