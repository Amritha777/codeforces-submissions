#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	bool flag=false;
	for(int i=0;i<s.size();i++){
		if (s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			flag=true;
		}
	}
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}