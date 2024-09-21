package main

import (
	"fmt"
	"math/rand"
	"time"
)

func insertionSort(arr []int) []int {
	for i := 0; i < len(arr); i++ {
		for j := i; j > 0 && arr[j-1] > arr[j]; j-- {
			arr[j], arr[j-1] = arr[j-1], arr[j]
		}
	}
	return arr
}

func main() {
	n := 100
	for n <= 1500000 {
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			arr[i] = rand.Intn(10000)
		}

		startTime := time.Now()
		insertionSort(arr)
		endTime := time.Now()
		totalTime := endTime.Sub(startTime).Seconds()
		fmt.Println(totalTime)
		n *= 2
	}
}
