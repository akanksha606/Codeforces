//Arrival of the general(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,max,min,x=0,y=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    max=a[0];min=a[0];
    for(i=0;i<n;i++){
      if(a[i]>max)
      max=a[i];
     if(min>a[i])
      min=a[i];
      }
    
    for(i=0;i<n;i++){
        if(a[i]==max){
        x=i;
        break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(a[i]==min){
        y=n-i-1;
        break;
        }
    }
    if((x+y)>=n)
    y=y-1;
    cout<<(x+y);
}
    
       
        
 

