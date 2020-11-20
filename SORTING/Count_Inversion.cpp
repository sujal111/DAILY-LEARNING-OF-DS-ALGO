//COUNT INVERSION
//Function to check Count Inversion

int countInversion(int arr[],int n){
    int res=0;
    for(int i=0;i<n-1;i++{
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            res++;
        }
    }
    return res;
    
}