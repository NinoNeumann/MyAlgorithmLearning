#include<iostream>
using namespace std;

// 求四位回文数
 


int main(){
	int a,b,c,d;
	for(int i = 1000;i<10000;++i){
		a = i/1000;
		b = i/100%10;
		c = i/10%10;
		d = i%10;
		if(a==d && b==c)cout<<a<<b<<c<<d<<endl;
	}

	return 0;
}

