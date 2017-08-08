// codeforces520a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	if (n<26)
	{
		cout<<"NO";
		return 0;
	}
	bool arr[26]={false};
	for (int i = 0; i < n; ++i)
	{
		if(str[i]>=97&&str[i]<123){
			arr[str[i]-97]=true;
			// cout<<"1";
		}
		else if(str[i]>=65&&str[i]<91){
			arr[str[i]-65]=true;
			// cout<<"1";
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i]==false)
		{
			cout<<"NO";
			return 0;
		}
		// cout<<arr[i];
	}
	cout<<"YES";
	return 0;
}