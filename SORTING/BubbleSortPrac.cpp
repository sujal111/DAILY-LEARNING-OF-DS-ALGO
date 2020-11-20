#include<bits/stc++.h>
using namespace std;
void swap(int *xp,int *yp)
{
    int temp[]=int *xp;
    int *xp=int *yp;
    int *yp=int temp;
}
void bubble_sort(int arr[],int n)
{
    int i,j;
    for(int i=0;i<n-1;i++)
    for(j=i+1;j<n-i-1;j++)
    if (arr[j]>arr[j+1])
    swap(&arr[j],&arr[j+1])


}
void print_Array(int arr[],int size)
{
    int i;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<end;


}
int main(){
    int arr[]={1,6,4,8,10};
    int n=sizeof(arr[])/sizeof(arr[0]);
    bubbleSort(arr,n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  
