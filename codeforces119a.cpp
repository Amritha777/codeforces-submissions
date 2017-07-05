// codeforces119a.cpp
#include <iostream>
using namespace std;

int gcd(int a,int b){
	if (b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}





int main(int argc, char const *argv[])
{
	int a,b,n,move=0;
	cin>>a>>b>>n;
	while(true){
		if(move==0){
			if (gcd(a,n)>n)
			{	
				break;
			}
			else
				n-=gcd(a,n);
			move=1;
		}
		if(move==1){
			if (gcd(b,n)>n)
			{
				break;
			}
			else
				n-=gcd(b,n);
			move=0;
		}
	}
	cout<<(move+1)%2;
	return 0;
}