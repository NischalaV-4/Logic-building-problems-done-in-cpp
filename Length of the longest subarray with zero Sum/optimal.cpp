#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& nums){
    int n=nums.size();
    map<int,int> Prefixsum;
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            maxi=i+1;
        }else{
        if(Prefixsum.find(sum)!=Prefixsum.end()){
            maxi=max(maxi,i-Prefixsum[sum]);
        }else{
        Prefixsum[sum]=i;
        }
    }
    }
    return maxi;
}

int main() {
    // sample input
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // print result
    cout << maxLen(a) << endl;
    // exit
    return 0;
}