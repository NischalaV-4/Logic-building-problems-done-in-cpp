#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int bin;
    cout << "enter a binary";
    cin>>bin;
    int dec_num=0,temp=bin;
    int n=to_string(bin).length();
    int i=0;
    for(i=0;i<n;i++){
        int rem=temp%10;
        dec_num+=(rem*pow(2,i));
    }
    cout<<"decimal number:"<<dec_num;
    return 0;
}
//converting binary to dec