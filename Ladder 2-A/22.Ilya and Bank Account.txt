// Ilya and Bank Account(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,z,m;
    cin>>n;
    x=n/10;
    y=n%10;
    z=(n/100)*10+y;
    m=max(n,x);
    m=max(m,z);
    cout<<m;
}