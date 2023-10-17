/*
 * Name: Soumi Batabyal
 * Reg No: 2341002065
 * PS LINK: https://cses.fi/problemset/task/1071/
 */


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long y,x;
        cin>>y>>x;
        long long max;
        if( y > x){
            max = y;
        }else{
            max = x;
        }

        long long ans = (max-1)*(max-1);
        if(max%2==1){
            if(y==max){
                ans+=x;
            }else{
                ans+=max;
                ans+=max-y;
            }
        }else{
            if(x==max){
                ans+=y;
            }else{
                ans+=max;
                ans+=max-x;
            }
        }

        cout<<ans<<endl;
    }
        return 0;
}