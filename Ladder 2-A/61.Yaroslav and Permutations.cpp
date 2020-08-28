//Yaroslav and Permutations(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int count(int x,int ar[],int n){
    int i,c(0);
    for(i=0;i<n;i++){
        if(ar[i]==x)
        c++;
    }
    return c;
}
int main(){
     int n,i,f;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        f=1;
        int c=count(ar[i],ar,n);
        if(c>(n+1)/2){
            f=-1;
            break;
        }
    }
    if(f==-1)
    cout<<"NO";
    else
    cout<<"YES";
}
