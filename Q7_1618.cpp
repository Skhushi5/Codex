/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1618/
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long a=5;
    int b=0;
    while(a<=n){ 
        b+=n/a;
        a*=5;
    }
    cout<<b;
    return 0;
}