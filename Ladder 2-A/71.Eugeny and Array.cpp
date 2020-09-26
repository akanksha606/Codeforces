//Eugeny and Array(c++)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
	int n,m,a,b,mas1=0,menor;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		mas1+=(a==1);
	}
	menor=min(mas1,n-mas1)*2;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		cout<<((b-a)%2 && menor>=(b-a))<<endl;
	}
	return 0;
}