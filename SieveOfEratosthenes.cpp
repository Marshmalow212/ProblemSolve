#include <bits/stdc++.h>
#define ll long long
#define f1(n) for(int i=2;i<=n;i++)
#define fp(n) for(int i=2;i<=n;i++)
#define fn(n) for(int j=2;j<=n;j++)
#define Map map<int,int>
#define MB map<int,bool>
#define pr pair<int,int>
#define vec vector<int>
#define unmp unordered_map<int,int>
#define ft first
#define sd second
#define MoP map<pair,int>
#define N "Number"
#define PT "Prime Status"

using namespace std;

int main(){
Map ps;
f1(100){
ps[i] = 1;

}

fp(100){

//ps[i] = 1; 
  fn(100){
          int p = i * j;
	if(p>100)break;

	ps[p] = 0;
	}

}
cout<<N<<'\t'<<PT<<endl;
for(auto it=ps.begin();it!=ps.end();it++){

cout<<it->ft<<'\t'<<it->sd<<endl;

}
cout<<"Prime Number in the rang of 1 to "<<100<<endl<<"===========================================\n";
vec _prime;
f1(100){
    if(ps[i]==1)_prime.push_back(i);
}
for(auto it:_prime)cout<<it<<' ';       

}