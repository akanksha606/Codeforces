//Choosing teams(c++)
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n,k,i,x=0,y=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>x;
        if((5-x)>=k)
        y++;
        }
    cout<<y/3;
    }