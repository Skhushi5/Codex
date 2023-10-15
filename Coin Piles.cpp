#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int n = 0 ;n<t; n++){
        int a,b;
        cin>>a>>b;
        long long x= 2*a-b , y= 2*b-a;
        if( x>=0 && x%3 ==0 && y>=0 && y%3==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}