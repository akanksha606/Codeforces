//Young Physicist(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i,j,x=0,y=0,z=0;
 cin>>n;
 int v[n][3];
 for(i=0;i<n;i++){
     for(j=0;j<3;j++)
     cin>>v[i][j];
 }
 for(i=0;i<n;i++){
     for(j=0;j<3;j++){
         if(j==0)
         x=x+v[i][j];
         if(j==1);
         y=y+v[i][j];
         if(j==2)
         z=z+v[i][j];
     }
 }
 if(x==0&&y==0&&z==0)
 cout<<"YES";
 else
 cout<<"NO";
 }