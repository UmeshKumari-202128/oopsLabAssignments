//Program to make the use of inline function.

#include <iostream>
using namespace std;

inline int area(int x,int y){
    return x*y;
}

int main(){
    cout<<"Our area is :"<<area(4,5)<<endl;
    return 0;}