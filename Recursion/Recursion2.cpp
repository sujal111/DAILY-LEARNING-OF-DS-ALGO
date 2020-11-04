#include<bits/stdc++.h>
uisng namespace std;
int f(int n)
{
    //Base Case
    if(n==0 or n==1)
    return n;

    //Recursive Case
    return f(n-1)+f(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}