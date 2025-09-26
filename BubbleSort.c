#include <stdio.h>
#include <stdbool.h>
void swap ( int *i ,int *j ){

int temp = *i;
*i = *j ;
*j = temp;
}

void bubbleSort(int arr[] , int n){
    int i , j ;
    bool swapped;
        
         for(i =0 ; i<n-1 ; i++){
            swapped = false;

        for( j =0 ; j < n-i-1; j++ ){
            if(arr[j] > arr[j+1]){
                swap(&arr[j] ,&arr[j+1]);
                swapped = true ;
            }
        }

        if( swapped == false)
            break;
    }
}

// function for printing the Array 
void printArray(int arr[], int size){
    int i ;
    for( i = 0 ; i< size ; i++)
    printf(" %d",arr[i]);
}

int main()
{
    int arr [] ={6,3,8,9,1,2};
    int n = sizeof(arr) / sizeof(arr[n]);
    bubbleSort (arr,n );
   
    printf("Sorted Array is :");
    printArray(arr,n);

    return 0;
}