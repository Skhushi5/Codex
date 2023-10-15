#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long  a =1;
    for(int i=0 ; i<n ; i++){
        a= (a*2 )%(1000000000 +7); 
    }
    cout<< a;
    return 0;
}