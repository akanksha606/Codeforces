#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int x=(k*l)/nl;
int lime=c*d;
int m=min(x,lime);
m=min(m,p/np);
cout<<(m/n);
}
 