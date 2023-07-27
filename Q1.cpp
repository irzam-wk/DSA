/*Q1. Given a pointer to the first character of a (C style) string.
Find the length of the string.
int lengthOf(char* firstChar){}*/
#include <iostream>
using namespace std;
int lengthOf(char *firstChar){
    printf("Length of string is ");
    char *ptr = firstChar;
    int j = 0;
    while(*ptr!='\0'){
        ptr++;
        j++;
    }
    return j;
}
int main() {
    char fChar;
    char str[25];
    cout<<"ENter string\n";
    cin>>str;
    fChar = str[0];
    cout<<lengthOf(&str[0]);
    return 0;
}
