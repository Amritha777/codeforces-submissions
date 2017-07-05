// codeforces817a.cpp

#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
	 long int x1,y1,x2,y2,px,py;
	 cin>>x1>>y1>>x2>>y2;
	 cin>>px>>py;
	 int k1=(x2-x1)/px;
	 int k2=(y2-y1)/py;
	 if((abs(x2-x1)%px)!=0||(abs(y2-y1)%py)!=0){
	 	cout<<"NO";
	 	return 0;
	 }
	 if((abs(k1+k2))%2==0&&(abs(k1-k2))%2==0){
	 	cout<<"YES";
	 }
	 else{
	 	cout<<"NO";
	 }
	return 0;
}