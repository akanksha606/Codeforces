//Football(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1(1),c2(0),i;
    cin>>n;
    string s1,s2,x;
    cin>>s1;
    for(i=2;i<=n;i++){
        cin>>x;
        if(x==s1)
        c1++;
        else{
        s2=x;
        c2++;
        }
    }
    if(c1>c2)
    cout<<s1;
    else
    cout<<s2;
}