#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cout<<"enter how many numbers you would like to have:";
    cin>>n;
    cout<<"enter how the two numbers to start fibonacci with:";
    cin>>a>>b;
    int arr[(2*n)];
    for(int i=0;i<(2*n);i=i+2){
        arr[i]=a;
        arr[i+1]=b;
        a=a+b;
        b=a+b;
    }
    for(int i=0;i<(2*n);i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
