/*Write a C++ program and define the following structures:
struct type1{char x; char y; int  i; double d;};
struct type2{char x; double d; char y; int i;};
struct type3{char x; int  i; char y; double d;};
And find the size of each of these structures.*/
#include<iostream>
using namespace std;
#pragma pack(1)
struct type1{
    char x;
    char y;
    int i;
    double d;
};
struct type2{
    char x;
    double d;
    char y;
    int i;
};
struct type3{
    char x;
    int i;
    char y;
    double d;
};
int main(){
    type1 t1; type2 t2; type3 t3;
    cout<<"SIZE OF STRUCT1: "<<sizeof(t1)<<endl;
    cout<<"SIZE OF STRUCT2: "<<sizeof(t2)<<endl;
    cout<<"SIZE OF STRUCT3: "<<sizeof(t3);
    return 0;
}

