#include<iostream>
#include<vector>
using namespace std;
int missingNum(vector<int>&vec, int n){
    int res = 0;
    for(auto x: vec){
        res ^=x;
    }
    for(int i = 0; i<=n; i++){
        res ^=i;
    }
    return res;
}
int main(){
    vector<int>vec{1,2,3,4,5,6,7,9};
    int n = vec.size() + 1;
    int mNum = missingNum(vec, n);
    cout<<mNum<<endl;
    return 0;
}
