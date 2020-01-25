//Twins(c++)
#include<bits/stdc++.h>
 using namespace std;
 
int main(){
    int n,i,co=0,t=0,s1=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        t=t+arr[i];
    }
    sort(arr, arr+n); 
   while(s1<=t/2){
      co++;
      s1=s1+arr[n-co];
      
   }
   
    cout<<co;
    }