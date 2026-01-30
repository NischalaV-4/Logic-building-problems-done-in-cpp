#include<bits/stdc++.h>
using namespace std;
/* Brute force approach::
    step1:iterate through the 2 arrays
    step2:push each number of each array into  a ordered set
    step3:finally iterate through the entire set and push them into a array
    */
class findingSolution{
public:
    vector<int> Union(int arr1[],int arr2[],int n,int m){
        vector<int> result_union; 
        set<int> myset;
         for(int i=0;i<n;i++){
            myset.insert(arr1[i]);
         }
         for(int i=0;i<m;i++){
            myset.insert(arr2[i]);
         }
         for(auto it:myset){
            result_union.push_back(it);
         }
         return result_union;
}
};
int main(){
    int arr1[]={1,1,2,3,3,3,4,4,6};
    int arr2[]={3,4,4,4,7,7,8,8,11};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    findingSolution obj;
    vector<int> result=obj.Union(arr1,arr2,n,m);
    cout<<"final resultant union is:"<<endl;
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}
/*
time complexity::
1) in the function the time it takes for insertion operaion in set is----->O(logN)
2)so while inserting elements of first array into set---->O(nlogn)
3) for the second array--->O(mlogn)
4) for pushing set elements into a vector----->Olog(m+n)
TOTAL: O(nlogN)+O(mlogN)+O(m+n)

space complexity::
extra space is used for set and the union vector
O(m+n)----> for set
O(m+n)---->for vector
*/