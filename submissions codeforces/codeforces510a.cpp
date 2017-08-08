// codeforces510a.cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	bool t=true;
	for (int i = 0; i < n; ++i)
	{
		if(i%2==0){
			for (int j = 0; j < m; ++j)
			{
				cout<<"#";
			}
		}
		else{
			if (t)
			{
				for (int j = 0; j < m-1; ++j)
				{		
					cout<<".";
				}
				cout<<"#";
				t=false;
			}
			else
			{
				cout<<"#";
				for (int j = 0; j < m-1; ++j)
				{		
					cout<<".";
				}
				t=true;
			}


		}
		cout<<endl;
	}
	return 0;
}