//Check if array is sorted using recursion

#include<bits/stc++.h>
using namespace std;
//Array passed by referencebut address is passed by value
bool isSorted(int arr[],int n)
{
    if (n==0 or n==1)
    return true;
    //Rec Case
    if (a[0]<a[1]) and isSorted(a+1,n-1)
    {
        return true;
    }
    return false;

}
int main(){
    int arr[]={1,6,8,9,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,n)<<endl;
    return 0;

    }