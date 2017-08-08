#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int x0,y0,x1,y1;
	cin>>x0>>y0>>x1>>y1;
	if(x0==x1||y0==y1){
		if(x0==x1){
			int d=abs(y0-y1);
			cout<<x0+d<<" "<<y0<<" "<<x0+d<<" "<<y1;
		}
		else{
			int d=abs(x1-x0);
			cout<<x0<<" "<<y0+d<<" "<<x1<<" "<<y1+d;
		}
	}
	else if (abs(x1-x0)==abs(y1-y0)){
			cout<<x1<<" "<<y0<<" "<<x0<<" "<<y1;
	}
	else{
		cout<<-1;
	}
	return 0;
}