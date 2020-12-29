//Reconnaissance 2 (c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int m(9999),x(0),y(0);
int a[t];
int i;
for(i=0;i<t;i++){
    cin>>a[i];
    
}
for(i=0;i<t-1;i++){
        if(abs(a[i]-a[i+1])<m){
            m=abs(a[i]-a[i+1]);
            x=i;
            y=i+1;
        }
    
}
if(abs(a[0]-a[t-1])<m){
            m=abs(a[0]-a[t-1]);
            x=0;
            y=t-1;
        }
    
cout<<x+1<<" "<<y+1;
}
	