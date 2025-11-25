#include<stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3}; 
    int n = sizeof(arr[0]); 
    int min_value;

    if (n == 0) {
        printf("The array is empty.\n");
        return 1; 
    }

    min_value = arr[0];

    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i]; 
        }
    }

    printf("The minimum value in the array is: %d\n", min_value);

    return 0; 
}