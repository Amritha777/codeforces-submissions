// codeforces443a.cpp
#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	char str;
	bool arr[26]={false};
	while(str!='}'){
		scanf("%c",&str);
		if (str>=97&&str<123){
			arr[str-97]=true;
		}		
	}
	int count=0;
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i])
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}