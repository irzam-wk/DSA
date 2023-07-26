/*Q4. Given a pointer to the first element (0,0) of a 2D integer array, return a pointer to its last element (m-1,n-1). Where m & n are integers and denote the no. of rows and no. of cols in the 2D array.
int* lastEl(int* firstEl, int m, int n) {}*/
#include <iostream>
using namespace std;
int* lastEl(int* firstEl, int m,int n){
    int i=0,j=0;
    int *ptr = firstEl;
    cout<<"Address of the first element: "<<ptr<<endl;
    while(i!=(m+n)){
        ptr++;
        i++;
    }
    cout<<"Address of the last element: ";
    return ptr;
}
int main(){
    int m,n,mat[m][n];
    cout<<"Nter the no of rows: ";
    cin>>m;
    cout<<"Nter the no of columns: ";
    cin>>n;
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>mat[m][n];
        }
    }
    int *firstEl = &mat[0][0];
    cout<<lastEl(firstEl,m,n);
    //cout<<firstEl;
    return 0;
}