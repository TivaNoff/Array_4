#include <iostream>
#include <vector>

void duplicateZeros(std::vector<int>& arr) {
    int n = arr.size();
    int zeroCount = 0;

    // Count the number of zeros in the array
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            zeroCount++;
        }
    }

    // Iterate from the end of the array
    for (int i = n - 1; i >= 0; --i) {
        if (i + zeroCount < n) {
            arr[i + zeroCount] = arr[i];
        }

        // Duplicate zeros
        if (arr[i] == 0) {
            zeroCount--;

            if (i + zeroCount < n) {
                arr[i + zeroCount] = 0;
            }
        }
    }
}

int main() {
    // Приклад 1
    std::vector<int> arr1 = { 1, 0, 2, 3, 0, 4, 5, 0 };
    duplicateZeros(arr1);

    std::cout << "Output 1: [ ";
    for (int num : arr1) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    // Приклад 2
    std::vector<int> arr2 = { 1, 2, 3 };
    duplicateZeros(arr2);

    std::cout << "Output 2: [ ";
    for (int num : arr2) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
