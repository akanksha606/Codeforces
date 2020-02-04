//Cheap Travel(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,x=0,p=0,pn,pm,mini;
    cin>>n>>m>>a>>b;
    pn=n*a;
    x=n%m;
    pm=(n/m+1)*b;
    p=(x*a)+((n/m)*b);
    mini=min(pn,pm);
    mini=min(mini,p);
    cout<<mini;
    }
    