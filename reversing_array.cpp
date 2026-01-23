#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> original;
    int size,element;
    cout<<"enter size";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter element";
        cin>>element;
        original.push_back(element);
    }
    cout<<"before reversing";
    for(int nums:original){
        cout<<nums<<"\n";
    }
    for(int i=0;i<size/2;i++){
        int temp=original[i];
        original[i]=original[size-1-i];
        original[size-1-i]=temp;
    }
    cout<<"after reversing";
    for(int nums:original){
        cout<<nums<<"\n";
    }
}
