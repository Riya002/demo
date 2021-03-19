#include<iostream>
#include<string>
using namespace std;

string keypad[]={"","", "abc"," def","ghi","jkl", "mno", "pqrs","tuv", "wxyz"};
void letterCombo(string str, string ans){
	if(str.length()==0) {
		cout<<ans<<" ";
		return;
	}
	
	char ch=str[0];
	string send=keypad[ch-'0'];
	string rest= str.substr(1);
	for(int i=0;i<send.length();i++){
		letterCombo(rest, ans+send[i]);
	}
}

int main(){
	string str;
	cin>>str;
	letterCombo(str,"");
}
