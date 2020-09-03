//Soroban(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    long long int n,m,i;
    cin>>n;
    if(n==0)
    cout<<"O-|-OOOO";
    else{
    while(n!=0){
        m=n%10;
        if(m>5){
            i=0;
            cout<<"-O|";
            while(i<(m-5)){
            cout<<"O";
            i++;
            }
            cout<<"-";
            i=0;
            while(i<4-(m-5)){
            cout<<"O";
            i++;
            }
        }
        else if(m==5)
        cout<<"-O|-OOOO";
        else{
            i=0;
            cout<<"O-|";
            while(i<m){
            cout<<"O";
            i++;
            }
            cout<<"-";
            while(4-m>0){
                cout<<"O";
                m++;
            }
        }
        cout<<endl;
        n=n/10;
        
    }}
    }
