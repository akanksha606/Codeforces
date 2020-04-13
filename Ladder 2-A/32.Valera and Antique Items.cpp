#include<bits/stdc++.h>
using namespace std;
//Valera and Antique Items(c++)
int main()
{
int n,i,v,j,k,s,c=0;
vector <int> vect;
cin>>n>>v;
for(i=0;i<n;i++){
    cin>>k;
    int s[k];
    for(j=0;j<k;j++)
        cin>>s[j];
        for(j=0;j<k;j++){
        if(v>s[j]){
        c++;
        vect.push_back(i+1);
        break;
        }
    }
}
cout<<c<<"\n";
for(i=0;i<vect.size();i++)
cout<<vect[i]<<" ";
}