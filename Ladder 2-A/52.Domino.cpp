//Domino(c++)
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 	int n;
 	cin>>n;
 	int l {0},h {0}, flag {0};
 	for(int i=0;i<n;i++)
 	{
 		int a,b;
 		cin>>a>>b;
 		if((a+b)%2==1)
 			flag=1;
 
 		l+=a;
 		h+=b;
 	}
 	if(l%2==0 && h%2==0)
 		cout<<"0";
 	else if(l%2==1 && h%2==1 && flag==1)
 		cout<<"1";
 	else
 		cout<<"-1";
 return 0;
}