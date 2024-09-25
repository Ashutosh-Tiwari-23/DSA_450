#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixSumm(vector<int>vec){
    vector<int>arr(vec.size());
    arr[0] = vec[0];
    for(int i = 1; i<vec.size(); i++){
        arr[i] = vec[i] + arr[i-1];
    }
    return arr;
}

int main(){
    vector<int>vec{6,4,5,-3, 2, 8};
    vector<int>arr1 = prefixSumm(vec);
    for(auto &x:arr1){
        cout<<x<<" ";
    }
    return 0;
}