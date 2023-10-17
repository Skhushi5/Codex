
/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1083/
 */

#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    bool arr[n] = {false};
    for(int i=0;i<n-1;i++){
        int x; cin>>x;
        arr[x-1] = true;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==false){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}