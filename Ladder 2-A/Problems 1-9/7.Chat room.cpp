//Chat room(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,h="hello";
    int l,i,f=0,x=0;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++){
        if(s[i]==h[f]){ 
       f++;
       
        
        if(f>=5)
        break;
        }
        
    }
    if(i>=l)
    cout<<"NO";
    else
    cout<<"YES";
 
}
