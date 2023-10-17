/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1069/
 */

#include <iostream>
using namespace std;

int main() {
    string s;
    cin>> s;
    int n = s.size();
    int x=0 ;
    int max =0;
    char previous = 'x' ;
    for(int i =0; i<n ; i ++){
        if ( s[i] == previous){
            x++;
        }else{
            x=1;
        }
        if( x> max){
            max=x;
        } 
        previous =s[i];
    }
    cout<< max;
    return 0;
}