#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        for (int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}


//     1
//    121
//   12321
//  1234321
// 123454321
