//I wanna be the guy(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,i,q,j,x=0,in;
    cin>>n>>p;
    vector <int> a;
    for(i=0;i<p;i++){
    cin>>in;
    a.push_back(in);
    }
    cin>>q;
    for(i=p;i<(p+q);i++){
    cin>>in;
    a.push_back(in);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<(p+q);j++){
        if(a[j]==i){
            x++;
            break;
        }
    }}
    if(x==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
    }