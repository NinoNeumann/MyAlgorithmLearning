#include<iostream>
using namespace std;
// 153��һ���ǳ��������������������ÿλ���ֵ������ͣ���153=1*1*1+5*5*5+3*3*3���������������������������λʮ��������
 

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

