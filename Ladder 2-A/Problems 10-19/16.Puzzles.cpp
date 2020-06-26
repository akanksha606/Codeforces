//Puzzles(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,i,min;
cin>>n>>m;
int a[m];
for(i=0;i<m;i++)
    cin>>a[i];
 sort(a,a+m); 
 min=a[n-1]-a[0];
 for(i=0;i<m-n+1;i++){
   if(min>a[n+i-1]-a[i])  
   min=a[n+i-1]-a[i];
 } 
 cout<<min;
}