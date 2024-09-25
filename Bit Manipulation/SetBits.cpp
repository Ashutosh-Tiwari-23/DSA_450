#include<iostream>
int setBits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    int n{15};
    int nBit = setBits(n);
    std::cout<<nBit<<std::endl;
    return 0;
}