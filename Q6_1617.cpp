/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1617/
 */

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