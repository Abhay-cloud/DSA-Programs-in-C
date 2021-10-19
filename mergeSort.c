# include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void mergeSort(int A[], int B[], int C[], int m, int n){
    int i, j, k;
    i = j = k =0;

    while (i<m && j<n)
    {
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
            k++;
        }
        else{
            C[k] = B[j];
            j++;
            k++;
        }
    
    }

    while (i<m)
    {
        C[k] = A[i];
         i++;
         k++;
          

    }

    while (j<n)
    {
        C[k] = B[j];
        j++;
        k++;

    }

       
        printArray(C, m + n);
    
    
    
    
}


int main()
{
    int A[] = {3,4,6};
    int B[] = {2, 9, 12};
    int sizeOfC = (sizeof(A)/sizeof(int)) + (sizeof(B)/sizeof(int));
    int C[sizeOfC];

    mergeSort(A, B, C, sizeof(A)/sizeof(int), sizeof(B)/sizeof(int));
    printArray(C, sizeOfC);

    
    return 0;
}
