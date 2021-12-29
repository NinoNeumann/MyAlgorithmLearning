#include<iostream>
using namespace std;
// new Online OJ 
#define MAX 1001
int a[MAX];
int main(){
	int n;
	for(int i = 1;i<MAX;++i)a[i] = a[i-1]+i;
	while(cin>>n)cout<<a[n]<<endl;
	return 0;
}

