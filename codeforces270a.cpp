#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        double n=360.00/(180-a);
        int b=360/(180-a);
        // cout << n-(double)b << n<<b;
        if (n==(double)b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
