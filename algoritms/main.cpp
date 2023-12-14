#include <iostream>
#include <cmath>
#include <vector>
/** Bubble Sort: +  Time Complexity O(n^2) worst*/             
// int* bubbleSort(int *arr,int length) {
//     int *sortedArray = arr;
//     bool finish = false;
//     do {
//         finish = false;
//         for (int i = 0; i < length; i++){
//             int currentElement = arr[i];
//             int nextElement = arr[i + 1];
//             if(currentElement > nextElement) {
//                 arr[i] = nextElement;
//                 arr[i + 1] = currentElement;
//                 finish = true;
//             }
//         }
//     } while (finish);
//     return sortedArray;
// }

// int main() {
//     int arr[] = {5,3,1,4,2};
//     int length = sizeof(arr) / sizeof(int);

//     std::cout << bubbleSort(arr,length)[1] << std::endl;
//     return 0;
// }

/** Selection Sort: O(n^2)*/
// int* selectionSort(int *arr,int length) {
//     for (int i = 0; i < length - 1; i++) {
//         int prevIndex = i;

//         // Find the index of the minimum element in the remaining unsorted array
//         for (int nextIndex = i + 1; nextIndex < length; nextIndex++) {
//             if (arr[nextIndex] < arr[prevIndex]) {
//                 prevIndex = nextIndex;
//             }
//         }

//         // Swap the found minimum element with the first element in the unsorted part
//         if (prevIndex != i) {
//             int temp = arr[i];
//             arr[i] = arr[prevIndex];
//             arr[prevIndex] = temp;
//         }
//     }

//     return arr;
// }

// int main() {
//     int arr[] = {5,3,1,4,2};
//     int length = sizeof(arr) / sizeof(int);

//     int* sortedArr = selectionSort(arr, length);

//     for (int i = 0; i < length; i++) {
//         std::cout << sortedArr[i] << " ";
//     }
    
//     return 0;
// }


/** quickSort Sort: */
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high]; // Choose the rightmost element as the pivot
//     int i = low - 1; // Index of the smaller element

//     for (int j = low; j < high; j++) {
//         // If the current element is smaller than or equal to the pivot
//         if (arr[j] <= pivot) {
//             i++; // Increment index of the smaller element
//             swap(arr[i], arr[j]);
//         }
//     }

//     // Swap the pivot element with the element at the (i+1)th position
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         // Find pivot element such that
//         // elements smaller than pivot are on the left
//         // and elements greater than pivot are on the right
//         int pivotIndex = partition(arr, low, high);

//         // Recursively sort the sub-arrays
//         quickSort(arr, low, pivotIndex - 1);
//         quickSort(arr, pivotIndex + 1, high);
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     quickSort(arr, 0, n - 1);

//     cout << "\nSorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// void insertion(int *arr,int length) {
//     for(int i = 1; i < length; i++) {
//         int currentItem = arr[i];
//         int prevIndex = i - 1;

//         while(prevIndex >= 0 && arr[prevIndex] > currentItem) {
//             arr[prevIndex + 1] = arr[prevIndex];
//             prevIndex--;
//         }

//         arr[prevIndex + 1] = currentItem;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int length = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original array: ";
//     for (int i = 0; i < length; i++) {
//         std::cout << arr[i] << " ";
//     }

//     insertion(arr,length);

//     cout << "\nSorted array: ";
//     for (int i = 0; i < length; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


void merge(std::vector<int>& arr, int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;
    
    std::vector<int> leftArray(arr.begin() + left, arr.begin() + left + leftSize);
    std::vector<int> rightArray(arr.begin() + middle + 1, arr.begin() + middle + 1 + rightSize);

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}





 
// Bubble Sort + ancnum e hertakanutyamb ev amenamec element swapi ognuyamb brtuma araj; Time Complexity O(n^2)
// Selection Sort + gtnum e amenapoqr element@ ev qacuma araj, heto tenc sharunakabar minchev avartvi indexner@; Time Complexity O(n^2) 
// quickSort +  bajanum e  Pivot, Left and right maseri ev anyndhat nuyn@ minchev verj, and finishily concat its all recurioon  O(n^2)
// Insertion Sort: + stugum e hetevi ev dimacin@ ete meca het het gnalov noric krknuma ev mecer@ qay ar qayl het qaylerov dasavoruma hertakanutyamb O(n^2)
// Merge Sort: + merge sort@ ogtagorcvum e shat ,  O(n log n).   
// Heap Sort: 
// Counting Sort:
// Radix Sort:
// Bucket Sort:
// Tim Sort:
// Cocktail Sort:
// Gnome Sort: 