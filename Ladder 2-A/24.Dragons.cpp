//Dragons(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,i,f=0;
    cin>>s>>n;
    vector <pair<int,int>> v;
    int sd[n],inc[n];
    for (i=0;i<n;i++){
        cin>>sd[i]>>inc[i];
        v.push_back(make_pair(sd[i],inc[i]));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(s<=v[i].first){
        f=1;
        break;
    }
        else
        s=s+v[i].second;
        
    }
   if(f==0)
   cout<<"YES";
   else
   cout<<"NO";
}