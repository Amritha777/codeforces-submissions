// codeforces141a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1;
	string s2;
	string s3;
	cin>>s1>>s2>>s3;
	if (s3.size()!=s1.size()+s2.size()){
		cout<<"NO";
		return 0;
	}
	int arr[26]={0};
	for (int i = 0; i < s1.size(); ++i)
	{
		arr[s1[i]-65]++;
	}
	for (int i = 0; i < s2.size(); ++i)
	{
		arr[s2[i]-65]++;
	}
	for (int i = 0; i < s3.size(); ++i)
	{
		arr[s3[i]-65]--;
		
	}
	for (int i = 0; i <26; ++i)
	{
		if (arr[i]!=0)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";

	return 0;
}