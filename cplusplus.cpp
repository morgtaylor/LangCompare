#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>

void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 100;
    while(n <= 1500000) {
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = std::rand() % 10000;
        }
        auto startTime = std::chrono::high_resolution_clock::now();
        insertionSort(arr);
        auto endTime = std::chrono::high_resolution_clock::now();
        double totalTime = std::chrono::duration<double>(endTime - startTime).count();
        std::cout << totalTime << "\n";
        n = n * 2;
    }
    return 0;
}