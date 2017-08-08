// codeforces514a.cpp

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	if(s[0]>'4'&&s[0]!='9'){
		s[0]=48+('9'-s[0]);
		// cout<<s;
	}
	for (int i = 1; i < s.length(); ++i)
	{
		/* code */
		if(s[i]>'4'){
			s[i]=48+('9'-s[i]);
		}
	}
	cout<<s;
	return 0;
}