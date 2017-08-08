// codeforces237a.cpp
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string ni;
	int count=1;
	int currcount=1;
	string st1,st2;
	getline(cin,ni);
	
	// cin.ignore();
	getline(cin,st1);
	int n=stoi(ni);	
	n--;
	while(n--){
		getline(cin,st2);
		if(st1==st2){
			currcount++;
			count=max(count,currcount);
		}
		else{
		currcount=1;			
		}
		st1=st2;
	}
	count=max(count,currcount);	
	cout<<count;
	return 0;
}