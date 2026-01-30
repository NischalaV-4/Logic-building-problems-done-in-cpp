#include<bits/stdc++.h>
using namespace std;
/*
APPROACH OR ALGORITHM::
THIS IS A 2-POINTER APPROACH
step1:We need two pointers namely i ang j for each array
step2:Iterate through both the arrays and compare the corresponding arrays
step3:If element in array1 i.e arr1[i] is less then element in array 2 i.e arr2[j] then insert the arr1[i] into union iff and only iff the last pushed element in union
        is not equal to the current eleemnt
step4:Just like above same for if arr2[j] if it is less than arr1[i]
step5:Check of there are any elements left in either of arrays after completion of iteration of one array(the pointer crosses limit)  and insert them into resultant union       
*/
class findingUnion{
public:
vector<int> Union(vector<int> arr1,vector<int> arr2,int n,int m){
    int i=0,j=0;
    vector<int> resultant_union;
    while(i<n&& j<m){
        if(arr1[i]<=arr2[j]){
            if(resultant_union.size()==0 ||  resultant_union.back()!=arr1[i] ){
            resultant_union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(resultant_union.size()==0 || resultant_union.back()!=arr2[j]){
                resultant_union.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(resultant_union.size()==0 ||  resultant_union.back()!=arr1[i] ){
            resultant_union.push_back(arr1[i]);
            }
            i++;
    }
    while(j<m){
        if(resultant_union.size()==0 || resultant_union.back()!=arr2[j]){
                resultant_union.push_back(arr2[j]);
            }
            j++;
    }
    return resultant_union;
}
    
};
int main(){
    vector<int> arr1={1,1,2,3,3,3,4,4,6};
    vector<int> arr2={3,4,4,4,7,7,8,8,11};
    int n = arr1.size();
    int m = arr2.size();
    findingUnion obj;
    vector<int> result=obj.Union(arr1,arr2,n,m);
    cout<<"final resultant union is:"<<endl;
    for(auto it:result){
        cout<<it<<" ";
    }
return 0;
}
/*
TIME COMPLEXITY::
 the loop entirely runs through two arrays at same time -------->O(m+n)

 SPACE COMPLEXITY:
 the extra space is used to store the union result which is O(m+n)
*/