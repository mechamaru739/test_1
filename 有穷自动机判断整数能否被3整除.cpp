//输入#表示输入数字完毕,YES表示可以被3整除,NO表示不可以被3整除 
#include<bits/stdc++.h>
using namespace std;
int move(int s,char c){//自动机状态转移 
	if(s==0){
		if(c=='0'||c=='3'||c=='6'||c=='9') return 0;
		else if(c=='1'||c=='4'||c=='7') return 1;
		else if(c=='2'||c=='5'||c=='8') return 2;
	}
	if(s==1){
		if(c=='0'||c=='3'||c=='6'||c=='9') return 1;
		else if(c=='1'||c=='4'||c=='7') return 2;
		else if(c=='2'||c=='5'||c=='8') return 0;
	}
	if(s==2){
		if(c=='0'||c=='3'||c=='6'||c=='9') return 2;
		else if(c=='1'||c=='4'||c=='7') return 0;
		else if(c=='2'||c=='5'||c=='8') return 1;
	}
}
bool dfa(int s){//有穷确定状态自动机 
	char c;
	cin>>c;
	while(c!='#'){
		s=move(s,c);
		cin>>c;
	}
	if(s==0) return true;
	else return false;
}
int main(){
	int s=0;
	if(dfa(s)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
