/*Q3. Given the pointer to the last element of a (0 indexed) linear integer array, and an integer n denoting the size of the array. Reverse the array, and return nothing.
    void esrever(int* lastElement) {}*/
#include <iostream>
using namespace std;
int n;
int arr[10];
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void esrever(int* lastElement){
    int m = 0;
    int *ptr = lastElement;
    while(m < (n-1)){            //GONNA BE THE POINTER TO THE FIRST ELEMENT OF THE ARRAY
	ptr--;
	m++;
    }
    while(lastElement != ptr){
        swap(*lastElement,*ptr);
	lastElement--;
	ptr++;
    }
}
int main() {
    cout<<"Enter size of integer array: \n";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: "<<endl;
    for(int l=0; l<n; l++){
        cin>>arr[l];
    }
    int *lastElement = &arr[n-1];
    esrever(lastElement);
    printf("REVERSED ARRAY: ");
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
