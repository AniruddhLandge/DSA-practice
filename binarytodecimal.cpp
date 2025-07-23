binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num=110010;
    int ans = 0;
    int i=0;
    while(num){
        int mod = num%10;
        num = num/10;
        ans = ans + mod*pow(2,i);
        i++;
    }
    cout<<ans;
    return 0;
}
