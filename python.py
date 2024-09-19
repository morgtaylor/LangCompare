import time
import random

def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j + 1] = key

if __name__ == "__main__":
    n = 100
    startTime = []
    endTime = []
    totalTime = []

    while n <= 150000:
        arr = [random.randint(0, 10000) for _ in range(n)]
        startTime = time.time()
        insertionSort(arr)
        endTime = time.time()
        totalTime = endTime - startTime
        print(totalTime)
        n = n*2