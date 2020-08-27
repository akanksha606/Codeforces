//Life Without Zeroes(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long int nozero(long long int x){
    long long int m,n(0),f(0);
    while(x!=0){
        m=x%10;
        if(m!=0)
        n=n*10+m;
        x=x/10;
    }
    while(n!=0){
        m=n%10;
        f=f*10+m;
        n=n/10;
    }
    return f;
    
}
int main(){
    long long int a,b,c;
    cin>>a>>b;
    c=a+b;
    // cout<<nozero(a);
    if(nozero(a)+nozero(b)==nozero(c))
    cout<<"YES";
    else
    cout<<"NO";
   
}