#include <bits/stdc++.h>
#define ssm stringstream
#define vec vector<int>
#define f1(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
string s;
cin>>s;
ssm ss(s);
vec v;
int a,b;
char c;
while(!ss.eof()){
ss>>a>>c;
v.push_back(a);
}
f1(v.size())cout<<v[i]<<endl;


}