// codeforces733a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int jump=1;
	int tempJump=0;

	for (int i = 0; i < s.length(); ++i)
	{
		tempJump++;
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||	s[i]=='Y'){
			jump=max(jump,tempJump);
			tempJump=0;
		}
			
	}
	tempJump++;	
	jump=max(jump,tempJump);
	cout<<jump;
	return 0;
}