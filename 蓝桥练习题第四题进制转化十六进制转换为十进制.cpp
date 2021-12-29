#include<iostream>
#include<string>
using namespace std;

// 从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
// 注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。

string trans_h2b(string h_num){
	string res;
	for(int i = 0;i<h_num.length();++i){
		switch(h_num[i]){
			case'0':res+="0000";break;
			case'1':res+="0001";break;
			case'2':res+="0010";break;
			case'3':res+="0011";break;
			case'4':res+="0100";break;
			case'5':res+="0101";break;
			case'6':res+="0110";break;
			case'7':res+="0111";break;
			case'8':res+="1000";break;
			case'9':res+="1001";break;
			case'A':res+="1010";break;
			case'B':res+="1011";break;
			case'C':res+="1100";break;
			case'D':res+="1101";break;
			case'E':res+="1110";break;
			case'F':res+="1111";break;
		}
	}
	
	return res;
}

unsigned int trans_h2d(string h_num){
	string b_num;
	unsigned int d_num = 0;
	int base = 1;
	b_num = trans_h2b(h_num);
	for(int i = b_num.length()-1;i>=0;--i){
		d_num += (b_num[i]=='1')?base:0;
		base*=2;
	}
	return d_num;
}

int main(){
	string h_num;
	unsigned int d_num;
	cin>>h_num;
	d_num = trans_h2d(h_num);
	cout<<d_num<<endl;
	return 0;
}

