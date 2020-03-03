#include <bits/stdc++.h>
#define f1(n) for(int k=0;k<n;k++)
using namespace std;
int main()
{
	int l,m,n;

	l=5;
	m=5;

	int a[l]={2,3,4,8,9,100};
	int b[m]={5,7,10,13,14,100};

	n = l+m;

	int c[n];

	int i=0;
	int j=0;

	f1(n){

	if(a[i]<b[j]){
	c[k]=a[i++];
	}

	else{
	c[k]=b[j++];
	}

	}
	cout<<"Array After Merge Sort:\n";

	f1(n){
	cout<<c[k]<<" ";}
	cout<<endl;
return 0;      
}