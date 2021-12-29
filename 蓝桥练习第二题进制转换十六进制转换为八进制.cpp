#include<iostream>
#include<string>
#include<vector>
using namespace std;

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

string trans_b2o(string b_num){
	string res="";
	// judge the lenght of the b_num wheather the times of 3
	int filled_zeros = (b_num.length()%3==0)?0:(3-b_num.length()%3);
	for(int i = 0;i<filled_zeros;++i)b_num = '0'+b_num;
	for(int i = 0;i<b_num.length();i = i+3){
		int value = 4*(b_num[i]-'0')+2*(b_num[i+1]-'0')+(b_num[i+2]-'0');
		res+=((char)value+'0');
	}
	// if the first char of the string is 0  delete the zero
	if(res[0]=='0')	res = res.substr(1,res.length());
	return res;
}


int main(){
	int n;
	vector<string> vt;
	string h_num;
	string b_num;
	string o_num;
	
	cin>>n;
	for(int i = 0;i<n;++i){
		cin>>h_num;
		vt.push_back(h_num);
	}
	
	for(int i = 0;i<vt.size();++i){
		h_num = vt[i];
		b_num = trans_h2b(h_num);
		o_num = trans_b2o(b_num);
		cout<<o_num<<endl;
	}
	return 0;
}

