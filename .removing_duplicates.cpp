#include <bits/stdc++.h>
using namespace std;
//method 1
//using a set as it stores unique elements
// int main() {
//     int index=0;
    
//     vector<int> arr={1,1,1,2,2,2,3,3,3};
//     unordered_set<int> myset;
//     // unordered_set stores unique elements but NOT in sorted order
//     for(auto it:arr){
//         //finding if the element is already there in set or not
//         if(myset.find(it)==myset.end()){
//         myset.insert(it);
//         arr[index]=it;
//         index++;
//         }
//     }
//     cout<<"number of unique elements:"<<index;
//     return 0;
// }
//time complexity for this is Big O(NlogN) and space is O(n)

//method 2
//two pointer approach
/*The idea behind this approach is :
step1: declare a pointer i which points to the starting of array
step2:declare another pointer 'j' that points to 'i+1'th element
step3:check if element at jth position is similar to ith position
step4:if it is then increment j
step5:if not,then assign the element at jth position to the position just after the ith position i.e arr[i+1]=arr[j]
step6:finally increment i
*/
int main(){
    vector<int> arr={1,1,1,2,2,2,3,3,3};
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"number of unique elements:"<<i+1;
    return 0;
}
