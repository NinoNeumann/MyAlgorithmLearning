#include<iostream>
#include<string> 
using namespace std;

//给出一个非负整数，将它表示成十六进制的形式  0<=a<=2147483647  这是32位计算机最大能表示的数字 

// 思路： 将十进制整除16 得到的余数顺序为从低位到高位
 

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

