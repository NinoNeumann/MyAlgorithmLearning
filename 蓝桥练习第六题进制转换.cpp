#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ����һ��������n�� �����������������λ����λʮ�������������λ����֮�͵���n ��

int main(){
	
long i;
	int n;
    int a,b,c,d,e,f;
    cin>>n;
    //��λ�� 
	for(i=10000;i<1000000;i++)
	{if(i<100000){

		e=i/10000%10;//��
	 	d=i/1000%10;//ǧ 
	 	c=i/100%10;//�� 
	 	b=i/10%10;//ʮ 
	 	a=i%10;//�� 
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

