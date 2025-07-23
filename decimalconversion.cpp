decimal to binary
#include<iostream>
using namespace std;
int main(){
    int num=50;
    int mod;
    int i=0;
    int a[10];

    while(num){
    mod=num%2;
    num=num/2;
    a[i]=mod;
    i++;
    }
    for (int j = i-1; j >=0 ; j--)
    {
        cout<<a[j];
    }
    
}
