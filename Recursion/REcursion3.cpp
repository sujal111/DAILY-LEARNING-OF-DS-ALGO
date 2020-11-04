#include<bits/stc++.h>
using namespace std;
void dec(int n)
{
    //Base Case
    if(n==0 or n==1)
    return n;
    //Recursive Case
    cout<<n<<" ";//Change in inc
    dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    dec(n); 
    return 0;
}