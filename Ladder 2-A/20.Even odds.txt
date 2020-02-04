#include<bits/stdc++.h>
using namespace std;
//Even Odds(c++)
int main(){
    long long int n,x;
    cin>>n>>x;
    if(n%2==0){
        if(x<=n/2)
        cout<<(1+(x-1)*2);
        else{
            x=x-n/2;
            cout<<(2+(x-1)*2);
        }
        
    }
    else{
        if(x<=(n+1)/2)
        cout<<(1+(x-1)*2);
        else{
            x=x-(n+1)/2;
            cout<<(2+(x-1)*2);
        }
    }
    }
    