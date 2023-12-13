#include <iostream>


// Function definition


int max(int arr[], int length) {
    int maxNum = arr[0];
    for (int i = 0; i < length; ++i) {
        if(maxNum < arr[i]) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << "\n";
    }
}

void reverse(int arr[], int length) {
    int leftIndex = 0;
    int rightIndex = length - 1;   

    for (int i = 0; i < length / 2; ++i) {
        int temp = arr[leftIndex];
        arr[leftIndex] = arr[rightIndex];
        arr[rightIndex] = temp;


        leftIndex++;
        rightIndex--;
    }

    printArray(arr, length);
}

int complexLogicExampleOne1() {
    const int length = 5;
    int a[length] = { 5, 7, 2, 12, 1 };
    int *aPtr = a;
    *(a + 3) = 5;
    int b = a[0] * *(a + 2) - (a[1] + aPtr[4] - *(aPtr + 4));
    aPtr += 2;
    aPtr[1] = 100;
    int c = a[4] - a[2] * *(aPtr - 1) + b;


    std::cout << c << std::endl;

    return 0;
}

int complexLogicExampleTwo2() {
    const int length = 6;
    int numbers[length] = {2, 4, 6, 8, 10, 12};
    int *ptr = numbers;

    int temp = *ptr;
    *ptr = *(ptr + length - 1);
    *(ptr + length - 1) = temp;

    for (int i = 0; i < length; ++i) {
        *(ptr + i) *= 2;
    }

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += *(ptr + i);
    }

    std::cout << "Modified array: ";
    for (int i = 0; i < length; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}

int arrayInit() {
    /** Array  exercize*/
    int x[] = {1, 2, 3, 4, 5};
    int length = sizeof(x) / sizeof(int);

    /** logic */
    /** 1. write print array logic */
    // printArray(x, length);

    /** 2. write max array logic */
    // std::cout << "console " << max(x, length) << std::endl;

    /** 3. write reverse array logic */
    // reverse(x, length);

    /** 4. what is output this mixen logic */
    // complexLogicExampleOne1();

    /** 4. what is output this mixen logic */
    complexLogicExampleTwo2();




    

    










    /** Pointers */
    // int *x;
    // int y = 6;
    // x = &y;
    // y = 80;
    // *x += 5;
    // std::cout << "Size of int: " << y << std::endl;


    // int a = 500;
    // int b = 10;
    // int *d = &a;
    // int *z = &b;
    // d = z;
    // *d += 20;
    // std::cout << "Size of int: " << a << std::endl;
    // std::cout << "Size of int: " << b << std::endl;


    // int x[10] = {1,2,3,4,5};
    /** this way know array length */
    // std::cout << "console " << sizeof(x) / sizeof(int) << std::endl;

    // int x[10] = {155,92,3,4,5};
    // int *xPtr = x;
    // x = x + 1;
    // std::cout << "console " << *(x) << std::endl;
    // std::cout << "length " << sizeof(x) / sizeof(int) << std::endl;

    


    return 0; // Assum

}
