// codeforces4c.cpp
#include <map>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;string str;
	map<string,int> map;
	cin>>n;
	while(n--){
		cin>>str;
		if (map[str]==0){
			map[str]=1;
			cout<<"OK"<<endl;
		}

		else{
			cout<<str<<map[str]<<endl;
			map[str]++;
		}

	}
	return 0;
}
