/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1094/
 */

#include <iostream>
using namespace std;
#define ll long long

int main() {
    long long n;
    cin>> n;
    long long arr[n];
    for(ll i =0; i < n ; i ++){
        cin>> arr[ i];

    }
    ll ans =0 ;
    for ( ll i = 1; i <n ; i++ ){
        if ( arr[i] >= arr[i-1]){
            continue;
        }else{
            ans += arr[i-1] - arr[i]; 
            arr[i]=arr[i - 1];
        }
    } 
    cout<< ans;
    return 0;
}