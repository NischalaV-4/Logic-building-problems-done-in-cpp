#include<bits/stdc++.h>
using namespace std;
    int maxLen(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int maxL=INT_MIN;
        for(int i=0;i<n;i++){
          int count=1;
          int sum=0;
          for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==0){
              maxL=max(maxL,count);
            }
            count++;
          }
        }
        return maxL;
    }

int main() {
    // sample input
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // print result
    cout << maxLen(a) << endl;
    // exit
    return 0;
}