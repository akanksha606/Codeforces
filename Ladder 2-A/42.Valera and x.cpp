#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int n,i,j,c=0;
    cin>>n;
    char x,y;
    char a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cin>>a[i][j]; 
        }
    }
    x=a[n/2][n/2];
    y=a[0][1];
    if(x==y){
        cout<<"NO";
        return 0;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        if(i==j||j==n-i-1){
            if(a[i][i]!=x||a[i][n-i-1]!=x){
                c=1;
                break;
            }}
           else {
               if(a[i][j]!=y){
                c=1;
                break;
           }}
        
        
    }
    if(c==0)
    cout<<"YES";
    else
    cout<<"NO";
        }
        
    
        
    