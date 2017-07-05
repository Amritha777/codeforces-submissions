#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int a;
	int one,two,three,four;
	one=0;two=0;three=0;four=0;
	for(int i=0;i<t;i++){
		cin>>a;
		switch(a){
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
		}
	}
	int counttaxi=four;
	if (three>one){
		counttaxi+=one;
		three-=one;
		one=0;
	}
	else{
		counttaxi+=three;
		one-=three;
		three=0;
	}
	counttaxi+=three;
	counttaxi+=two/2;
	two=two%2;
	if(two>0){
		counttaxi++;
		if(one>=2){
			one-=2;
		}
		else if(one==1){
			one--;
		}

	}
	counttaxi+=one/4+((one%4!=0)?1:0);

	cout<<counttaxi;

	return 0;
}