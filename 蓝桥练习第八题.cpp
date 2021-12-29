#include<iostream>
using namespace std;
// 153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
 

int main(){
	
	int a,b,c; 

	for(int i = 100;i<1000;++i){
		a = i/100;
		b = i/10%10;
		c = i%10;
		if(a*a*a+b*b*b+c*c*c==i)cout<<i<<endl;
	}
	return 0;
}

