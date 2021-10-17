#include <stdio.h>


void printArray(int A[], int size){
    for (int i = 0; i < size; i++)
    {
       printf("%d ", A[i]);
    }
    printf("\n");
    
}

void bubbleSort(int *A, int size){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++) // loop for number of pass
    {
        printf("Working on pass number %d \n", i + 1);
        isSorted = 1;
        for (int j = 0; j < size - 1 -i; j++) // loop comparison in each pass
        {
           if (A[j]>A[j+1])
           {
               temp = A[j];
               A[j] = A[j+1];
               A[j+1] = temp;
               isSorted = 0;
               printf("Comparison %d \n", j + 1);
               printArray(A, size);
           }
           else{
               printf("No need to swap %d & %d \n", A[j], A[j+1]);
           }
           
        }
         if (isSorted)
        {
           return;
        }
        printf("Completed pass no. %d and result is: \n", i + 1);
        printArray(A, size);

    }
    
    
}


int main()
{
    int A[] = {34, 56, 12, 24, 67, 89, 11};
    // int A[] = {1, 2, 4, 5, 7};
    int size = sizeof(A)/sizeof(int);

    printf("Before sorting \n");
    printArray(A, size); // before sorting

    bubbleSort(A, size); // function to sort

    printf("After sorting \n");
    printArray(A, size); // after sorting

    return 0;
}
