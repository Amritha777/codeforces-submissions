// codeforces820a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int c,v0,v1,a,l;
	cin>>c>>v0>>v1>>a>>l;
	int p=1,sum=v0;
	
	while(sum<c){
		v0=v0+a;
		if(v0>=v1){
			sum+=v1-l	;
		}
		else{
			sum+=v0-l;
		}
		p++;
	}
	cout<<p;


	return 0;
}