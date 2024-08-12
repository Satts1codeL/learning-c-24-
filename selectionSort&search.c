#include <stdio.h>

void insertionSort(int arr[], int n){
  for(int i = 1; i< n; i++){
    int key = arr[i];
    int j = i - 1;
    while( j >= 0 && arr[j] > key){
      arr[j + 1] = arr[j];
      j = j - 1;
      
    }
          arr[j + 1]= key;
  }
}  
  
  
  

int Binary(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while(left <= right)
    {
      int mid = left+(right - left)/2;
        if (arr[mid] == target) {
            return mid;  // Return index of the target
        }
         else if
           (arr[mid] < target){
            left =  mid + 1 ;

           }
         else {
           right = left - 1;
         }


    }
    return -1;  // Target not found
}

int main() {
    int n, target;

    // Take input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Take input for the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort( arr, n);

    // Take input for the target value
    printf("Enter the target value to search: \n");
    scanf("%d", &target);


    // Perform linear search
    int index = Binary(arr, n, target);

    // Output the result
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

