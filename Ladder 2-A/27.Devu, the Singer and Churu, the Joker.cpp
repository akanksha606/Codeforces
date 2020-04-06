//Devu, the Singer and Churu, the Joker(c++)
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n,d,i,s=0;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++){
    cin>>arr[i];
    s=s+arr[i];
    }
   if((s+(n-1)*10)<=d)
       cout<<(n-1)*2+(d-(s+(n-1)*10))/5;
   else
       cout<<-1;
   
    }