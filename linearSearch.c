#include<stdio.h>

int linearSearch(int arr[], int size, int searchElement){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==searchElement)
        {
            return i;
        }
    }
    return -1;
}

    int main()
    {
        int arr1[] = {1, 2, 5, 9 , 10, 11, 4, 7, 18, 20, 90, 40, 60, 80, 100};
        int size1 = sizeof(arr1)/sizeof(int);
        int element1 = 40;
        int searchIndex = linearSearch(arr1, size1, element1);
        printf("The element %d was found at %d \n", element1, searchIndex);

        
        
        return 0;
    }
    
    
