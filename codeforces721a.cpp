// codeforces721a.cpp
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	vector<int> v;
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='B'){
			count++;
			if(s[i+1]=='W'||i==n-1){
				v.push_back(count);
				count=0;
			}
		}
		
	}
	cout<<v.size()<<endl;
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout<<*i<<" ";
	}
	return 0;
}