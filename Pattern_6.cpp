#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num++;
        }
        cout<<endl;
    }
return 0;
}


// 1
// 12
// 123
// 1234
// 12345
