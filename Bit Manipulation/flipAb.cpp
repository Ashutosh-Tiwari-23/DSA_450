#include<iostream>
int countSetBitsFlip(int a, int b){
    int res = a^b;
    int count = 0;
    while(res > 0){
        count++;
        res = res & (res - 1);
    }
    return count;
}
int main(){
    int a{4}, b{9};
    int flipBit = countSetBitsFlip(a, b);
    std::cout<<flipBit<<std::endl;
    return 0;
}