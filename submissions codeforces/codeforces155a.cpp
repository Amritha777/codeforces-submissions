// codeforces155a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int c,max,min,count=0;
	cin>>c;
	n--;
	max=c;min=c;
	while(n--){
		cin>>c;
		if(c>max){
			count++;
			max=c;
		}
		else if(c<min){
			count++;
			min=c;
		}
	}
	cout<<count;
	return 0;
}