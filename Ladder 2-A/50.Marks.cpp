//Marks(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int n,m,x,i,j;
    cin>>n>>m;
   char ar[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    int f(0),c(0);
    for(int k=0;k<n;k++){
       
    
    for(i=0;i<m;i++){
         f=1;
        for(j=0;j<n;j++){
            
            if(ar[k][i]<ar[j][i])
            f=0;
            
        }
        if(f==1){
        c++;
        break;
        }
    }
    } 
    cout<<c;
}
  
    