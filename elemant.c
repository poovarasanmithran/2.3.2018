#include<stdio.h>
#include<stdlib.h>
void printRepeating(int arr[], int size)
{
  int i, j;
  printf(" Repeating elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}     
 
int main()
{
  int arr[] = {4, 2, 4, 5, 4, 1, 1};
  int arr_size = sizeof(arr)/sizeof(arr[0]);  
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
