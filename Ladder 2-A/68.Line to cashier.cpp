//Line to cashier(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int n,i,j,s(0),x;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        s=0;
        for(j=1;j<=ar[i];j++){
            cin>>x;
            s=s+x*5;
        }
        ar[i]=s+ar[i]*15;
    }
    int m=ar[0];
    for(i=0;i<n;i++){
        if(m>ar[i])
        m=ar[i];
        
    }
   cout<<m;
}
