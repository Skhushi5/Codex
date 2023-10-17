#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%4==1 || n%4==2){
        cout<<"NO";
    }
    else if(n%4==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for(int i=1; i<=n; i+=4){
            cout<<i<<' '<<i+3<<' ';
        }
        cout<<endl;
        cout<<n/2<<endl;
        for(int i=1; i<=n; i+=4){
            cout<<i+1<<' '<<i+2<<' ';
        }
    }
    else{
        cout<<"YES"<<endl;
        cout<<n/2+1<<endl;
        cout<<1<<' '<<2<<' ';
        for(int i=4; i<=n; i+=4){
            cout<<i<<' '<<i+3<<' ';
        }
        cout<<endl;
        cout<<n/2<<endl;
        cout<<3<<' ';
        for(int i=4; i<=n; i+=4){
            cout<<i+1<<' '<<i+2<<' ';
        }
    }

    return 0;
}