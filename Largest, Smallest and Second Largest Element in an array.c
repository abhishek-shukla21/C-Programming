#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,45,5}, i;
    int n = sizeof(arr)/sizeof(arr[0]);
    // Printing array Elements
    printf("Array Elements are:\n");
    for(i=0; i<=n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Largest Element is: %d", largest(arr,n));
    return 0;
}
int largest(int arr[], int n)
{
    int j;
    int max = arr[0];
    for(j=0; j<=n; j++)
    {
      if(arr[j]>max)
    {
        max = arr[j];
    }

    }
    return max;
}
