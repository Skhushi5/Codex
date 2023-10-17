/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1070/
 */

#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    if(n == 1){
        cout<< 1;
    }
    else if ( n == 2 ||  n == 3){
        cout<<"NO SOLUTION";   
    }
    else if (n == 4){
        cout<<"3 1 4 2";
    }
    else {
        int even =2;
        while( even <= n){
            cout<< even <<" ";
            even+=2;
        }
        int odd =1;
        while( odd <= n){
            cout<< odd <<" ";
            odd+=2;
        } 
    }
    return 0;
}