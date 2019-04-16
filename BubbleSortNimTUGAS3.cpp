#include<math.h>
#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp=*xp;
  *xp=*yp;
  int xpp=*yp;
  *yp=temp;
}

void bubbleSort(int arr[], int n)
{
 int i, j;
  for(i=0; i<n-1; i++)
  
    for(j=0; j<n-i-1; j++)
      if(arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[],int size)
{
  int i;
  for(i=0; i<size; i++)
    cout<<" "<<arr[i];
  cout<<("n");
}

int main()
{
  int arr[] ={1, 8, 2, 9, 1, 4, 2, 0, 4, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
  cout<<("sorted array: \n");
  printArray(arr, n);
  return 0;
}
