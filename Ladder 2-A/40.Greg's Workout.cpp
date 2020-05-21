#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int i,n,x,chest=0,bicep=0,back=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(i%3==0)
        chest=chest+x;
        else if(i%3==2)
        back=back+x;
        else
        bicep=bicep+x;
        }
        if (chest > bicep && chest > back) 
        cout<<"chest";
  
    if (bicep > chest && bicep > back) 
        cout<<"biceps";
  
    if (back > chest && back > bicep) 
        cout<<"back";
  
        }
    