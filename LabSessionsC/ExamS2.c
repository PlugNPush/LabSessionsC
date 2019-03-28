#include <stdio.h>

// Question 1
int swap(int array[], int pos1, int pos2){
    int temp;
    // Basic swap using a temp value
    temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
    return *array;
}

// Question 2
int minimum(int array[], int l){
    int min = 0;
    int i;
    
    // The position of the smallest value between two elements of the array is saved to min, and when the array was scanned completely, min has become the minimum position of the array.
    for (i = 1; i < l; i++) {
        if (array[i] < array[min]) {
            min = i;
        }
    }
    
    return min;
    
}

int sort(int array[], int l){
    int i;
    int testArray[l];
    
    // Fill the test Array exactly like the array
    for (i = 0; i < l; i++) {
        testArray[i] = array[i];
    }
    
    // Get the minimum value and destroy it from the test Array, while writing it to the original Array
    for (i = 0; i < l; i++) {
        // The minimum value is now at position 0 of the test Array
        swap(testArray, 0, minimum(testArray, 5));
        // We write it at position i of the main array
        array[i] = testArray[0];
        // We destroy the position 0 by setting an enormous value to it, so we make sure it doesn't overwrite another value of the test Array
        testArray[0] = 1000000000;
    }
    // At the end, the Array is sorted and the testArray is completely destroyed, full of 1000000000 at every position
    
    return *array;
}

// Simplified for Question 4
void showArray(int array[], int max){
    int i;
    // We just print every element of the array in the console
    for (i = 0; i < max; i++) {
        printf("%d", array[i]);
        printf("\n");
    }
    return;
}

// Question 4
int main(int argc, const char * argv[]) {
    
    // Manual fillment of the array
    int array[5];
    array[0] = 42;
    array[1] = 7;
    array[2] = 5;
    array[3] = 25;
    array[4] = 9;
    
    // Execution of the program
    
    printf("Array at the beginning:\n");
    showArray(array, 5);
    printf("-------\n");
    printf("Array after swap(2 <-> 3):\n");
    swap(array, 2, 3);
    showArray(array, 5);
    printf("-------\n");
    printf("The position of the minimum value of the array is:\n");
    printf("%d", minimum(array, 5));
    printf("\n-------\n");
    printf("The sorted array is:\n");
    sort(array, 5);
    showArray(array, 5);
    printf("\n\n");
    

    
    return 0;
}
