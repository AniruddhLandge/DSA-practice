//decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int num=50;
//     int mod;
//     int i=0;
//     int a[10];

//     while(num){
//     mod=num%2;
//     num=num/2;
//     a[i]=mod;
//     i++;
//     }
//     for (int j = i-1; j >=0 ; j--)
//     {
//         cout<<a[j];
//     }
    
// }

//binary to decimal
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int num=110010;
//     int ans = 0;
//     int i=0;
//     while(num){
//         int mod = num%10;
//         num = num/10;
//         ans = ans + mod*pow(2,i);
//         i++;
//     }
//     cout<<ans;
//     return 0;
// }