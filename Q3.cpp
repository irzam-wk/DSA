/*Q3. Given the pointer to the last element of a (0 indexed) linear integer array, and an integer n denoting the size of the array. Reverse the array, and return nothing.
    void esrever(int* lastElement) {}*/
#include <iostream>
using namespace std;
int n;
void esrever(int* lastElement){
    int revarr[10];
    int k = 0;
    while(k!=n){
        revarr[k] = *lastElement;
        lastElement--;
        k++;
    }
    cout<<"\nREVERSED ARRAY:";
    for(k=0; k<n; k++){
        cout<<endl<<revarr[k]; //DiD nOT rEtURn array
    }
}
int main() {
    int arr[10];
    cout<<"Enter size of integer array: \n";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int *lastElement = &arr[n-1];
    esrever(lastElement);
    return 0;
}