#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    long long l,r,a,b,c;
    cin>>l>>r;
    if(l%2!=0)
    l++;
    if(r-l<2)
    cout<<-1;
    else{
        a=l;
        b=l+1;
        c=l+1+1;
        cout<<a<<" "<<b<<" "<<c;
    }
        }
    