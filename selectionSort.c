#include <stdio.h>

void printArray(int A[], int size){
    for (int i = 0; i < size; i++)
    {
       printf("%d ", A[i]);
    }
    printf("\n");
    
}

void selectionSort(int *A, int size){
    int indexOfMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Pass number : %d \n" , i + 1);
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (A[j]< A[indexOfMin])
            {
                indexOfMin = j;
            }
            
        }

        temp  = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
        printArray(A, size);



        
    }
    
}

int main()
{
    // int A[] = {8, 5, 3, 2, 7, 9};
    int A[] = {7, 2, 8, 4, 9};
    int size = sizeof(A)/sizeof(int);
    printf("Before Sorting: \n");
    printArray(A, size);
    selectionSort(A, size);
    printf("After Sorting: \n");
    printArray(A, size);
    

    return 0;
}
