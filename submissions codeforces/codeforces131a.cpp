#include <iostream>
#include <locale>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	int count=0;
	for(int i=0;i<a.size();i++){
		if (a[i]<97)
			count++;
	}
	if(count==a.size()){
		for(int i=0;i<a.size();i++)
			a[i]=tolower(a[i]);
	}
	else if(a[0]>=97&&count==a.size()-1){
		for(int i=0;i<a.size();i++)
			a[i]=tolower(a[i]);
		a[0]-=32;
	}
	cout<<a;
		

	return 0;
}