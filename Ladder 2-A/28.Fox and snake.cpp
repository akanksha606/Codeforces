//Fox and snake
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int i,j,n,m,x=1,y=3;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++){
        if(i%2==0)
        for(j=0;j<m;j++){
        cout<<'#';
        }
        if(i==y){
            cout<<'#';
            for(j=1;j<m;j++)
            cout<<'.';
            y=y+4;
        }
        if(i==x){
            
            for(j=1;j<m;j++)
            cout<<'.';
            x=x+4;
            cout<<'#';
        }
        cout<<"\n";
    }
    
    
    }