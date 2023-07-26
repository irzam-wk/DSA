/*Q2. Find the sizes of the following data types using pointer arithmetics:
•bool
•char
•int
•double
•long long
•long double*/
// METHOD 1??
// Don't Know How to do this...
#include <iostream>
using namespace std;
template <typename T> int sizeOf(T dtype){
    T *ptr = &dtype;
    T *ptri = ptr;
    ptr++;
    T ptrsize = (ptr - ptri) * sizeof(T);
    return ptrsize;
}
int main() {
    int a = 10;
    float w = 22.1;
    double x = 101.5;
    long long y = 779;
    bool z = 1;
    char l = 'L';
    long double k;
    cout<<"INT: "<<sizeOf(a);
    cout<<endl<<"FLOAT: "<<sizeOf(w);
    cout<<endl<<"DOUBLE: "<<sizeOf(x);
    cout<<endl<<"LONG LONG: "<<sizeOf(y);
    cout<<endl<<"BOOL: "<<sizeOf(z);
    cout<<endl<<"CHAR: "<<sizeOf(l);
    cout<<endl<<"LONG DOUBLE: "<<sizeOf(k);
    return 0;
}


// PART 2
// HOW ITS SUPPOSED TO BE DONE.... BUT I STILL COULDNT DO IT
#include <iostream>
using namespace std;
template <typename T> int sizeOf(T dtype){
    T *ptr = &dtype;
    T *ptri = ptr;
    ptr++;
    T yptr = *((T*)(&ptri));
    T xptr = *((T*)(&ptr));
    T ptrsize = (xptr - yptr);
    return ptrsize;
}
int main() {
    int a = 10;
    float w = 22.1;
    double x = 1.5;
    long long y = 779;
    bool z = 1;
    char l = 'L';
    long double k = 71.42;
    cout<<"INT: "<<sizeOf(a);
    cout<<endl<<"FLOAT: "<<sizeOf(w);
    cout<<endl<<"DOUBLE: "<<sizeOf(x);
    cout<<endl<<"LONG LONG: "<<sizeOf(y);
    cout<<endl<<"BOOL: "<<sizeOf(z);
    cout<<endl<<"CHAR: "<<sizeOf(l);
    cout<<endl<<"LONG DOUBLE: "<<sizeOf(k);
    return 0;
}