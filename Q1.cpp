/*Q1. Given a pointer to the first character of a (C style) string.
Find the length of the string.
int lengthOf(char* firstChar){}*/
#include <iostream>
using namespace std;
int lengthOf(char *firstChar){
    printf("Length of string is ");
    string l = firstChar;
    int i = 0;
    cout<<l.size();
    return 0;
}
int main() {
    char fChar;
    string str;
    cout<<"ENter string\n";
    cin>>str;
    fChar = str[0];
    lengthOf(&fChar);
    return 0;
}