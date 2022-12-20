#include <stdio.h>  
  
void insert(int a[], int n) /* function to sort an aay with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int x) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < x; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[100], x;
    printf("Enter Size of Array:");
    scanf("%d", &x);
    printf("\nEnter The Array to be sorted:\n"); 
    for(int i=0;i<x;i++)
    {
        scanf("%d", &a[i]);
    }  
    printf("Before sorting array elements are - \n");  
    printArr(a, x);  
    insert(a, x);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, x);  
  
    return 0;  
}   
