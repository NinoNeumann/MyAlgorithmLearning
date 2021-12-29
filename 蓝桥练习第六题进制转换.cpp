#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。

int main(){
	
long i;
	int n;
    int a,b,c,d,e,f;
    cin>>n;
    //五位数 
	for(i=10000;i<1000000;i++)
	{if(i<100000){

		e=i/10000%10;//万
	 	d=i/1000%10;//千 
	 	c=i/100%10;//百 
	 	b=i/10%10;//十 
	 	a=i%10;//个 
	 	if( a==e && b==d && a+b+c+d+e==n)
	 		printf("%ld\n",i);
	 }
	 else if(i>100000){
	 	a=i/100000%10;
	 	b=i/10000%10;
	 	c=i/1000%10;
	 	d=i/100%10;
	 	e=i/10%10;
	 	f=i%10;
	 	if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
	 	printf("%ld\n",i);
	 	} 
	}
	return 0;
}

