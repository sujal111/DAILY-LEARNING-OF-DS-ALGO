#include<bits/stdc++.h>
using namespace std;
int nat_rec(int n){
    if(n<=1)
    return n;
    return n+ nat_rec(n-1);
}
int main() 
{ 
    int n = 5; 
    cout << nat_rec(n); 
    return 0; 
} 