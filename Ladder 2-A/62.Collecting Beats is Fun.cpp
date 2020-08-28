//Collecting Beats is Fun(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int k,i,f(1);
    int ar[10]={0};
    cin>>k;
    for(i=0;i<16;i++){
            char c;
            cin>>c;
            if(c!='.')
            ar[c-48]++;
    }
    for(i=0;i<10;i++){
        if(ar[i]>(2*k)){
           cout<<"NO";
           return 0;
        }
    }
    cout<<"YES";
}
