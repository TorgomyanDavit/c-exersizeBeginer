#include <iostream>

void printNewArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << ",";
    }
}

void BubbleSort(int* arr,int length) {
    bool finish = false;

    do {
        finish = false;

        for(int i = 0; i < length; i++) {
            int currElement = arr[i];
            int nextElement = arr[i + 1];

            if(currElement > nextElement) {
                arr[i] = nextElement;
                arr[i + 1] = currElement;
                finish = true;
            }
        }

    } while(finish);


    printNewArray(arr,length);
}

void SelectionSort(int* arr,int length) {

    for(int i = 0;i < length;i++) {
        int minIndex = i;


        for(int i2 = 0;i2 < length;i2++) {
            int currentElement = arr[i2];
            int nextElement = arr[i2 + 1];

            if(nextElement < currentElement) {
                minIndex = i2;
            }

        }   


        std::cout << minIndex;
    }

    // printNewArray(arr,length);
}

int sortingAlgoritm() {
    /** Array  exercize*/
    int x[] = {5,4,3,2,1};
    int length = sizeof(x) / sizeof(int);

    // BubbleSort(x,length);
    SelectionSort(x,length);


    return 0; 

}
