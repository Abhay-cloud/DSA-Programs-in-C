#include <stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size -1;
    // keep seraching unti low and high converges
    while (low<=high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid + 1;
        }
        else{
            high = high - 1;
        }     
    }
    return -1;
    
}

int main()
{
     int arr1[] = {1, 2, 5, 9 , 10, 11,18, 20, 40, 60, 80, 100};
        int size1 = sizeof(arr1)/sizeof(int);
        int element1 = 100;
        int searchIndex = binarySearch(arr1, size1, element1);
        printf("The element %d was found at %d \n", element1, searchIndex);

    return 0;
}
