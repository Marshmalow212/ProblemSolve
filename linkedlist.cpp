#include <bits/stdc++.h>
#define f1(n) for(int i=0;i<n;i++)
#define pr pair<int,int>
#define vec vector<int>
#define MP map<pr,string>
#define MB map<pair,bool>
#define unmp unordered_map<int,int>
#define ft first
#define sd second

using namespace std;

struct Link{
int data;
Link* right;
Link* left;
};

void Travers(Link* x){
Link *l = x;
Link *r = x;
//head->next = NULL;
cout<<'\t'<<x->data<<'\t'<<endl;

while(r!= NULL){
cout<<"Data : "<<r->data<<endl;
r=r->left;
}
  
}

int main(){
int a[]={2,5,4,3,6,7,8,9};
Link* head = NULL;
head = new Link();
int i=0;
int len = 8;
head->data = 5;
head->left = head->right = NULL;
while(i<len){
Link* in = new Link();
int input = a[i++];
in->data = input;
in->right = in->left = NULL;
Link *tmp = head;
Link *tmpr = head;

while (tmp != NULL){
if(tmp->data>=input){
    tmp = tmp->left;
}
else{
tmp = tmp->right;
} 
}

tmp = in;
}

Travers(head);

}


