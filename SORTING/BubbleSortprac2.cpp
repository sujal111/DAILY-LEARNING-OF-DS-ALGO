#include<bits/std++.h>
using namespace std;

void swap(int *xp,int *yp)
{
    int temp[]=int *xp;
    int *xp=int *yp;
    int *yp=int temp;
}
void bubble_Sort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(int i=0;i<n-1;i++)
   swapped=false;
   for(int j=0;j<n-1-i;j++)
   {
       if(arr[j]>arr[j+1]){
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
       }
   }
   if (swapped == false) 
        break; 
   } 
} 

void print_Array(int arr[],int size){
    int i;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<end;

}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}