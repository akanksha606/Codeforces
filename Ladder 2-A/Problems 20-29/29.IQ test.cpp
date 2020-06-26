//IQ test(c++)
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n,i,x,ce=0,co=0,ie=0,io=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(x%2==0){
            ce++;
            ie=i+1;
        }
        else{
            co++;
            io=i+1;
        }
    }
    if(ce==1)
        cout<<ie;
        else
        cout<<io;
    }