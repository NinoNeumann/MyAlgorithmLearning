#include<iostream>
#include<string> 
using namespace std;

//����һ���Ǹ�������������ʾ��ʮ�����Ƶ���ʽ  0<=a<=2147483647  ����32λ���������ܱ�ʾ������ 

// ˼·�� ��ʮ��������16 �õ�������˳��Ϊ�ӵ�λ����λ
 

int main(){
	unsigned int d_num;
	string h_num;
	cin>>d_num;
	if(d_num==0)h_num = '0';
	while(d_num){
		char appended_num = (d_num%16>9)?(d_num%16-10)+'A':(d_num%16)+'0';
		h_num = appended_num+h_num;
		d_num/=16;
	}
	cout<<h_num<<endl;
	return 0;
}

