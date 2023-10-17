#include <iostream>
using namespace std;

int main() {
    int n,temp=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    cout<<"The elements of the array before swapping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
    
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
    cout<<endl<<"The elements of the array after swapping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
return 0;
}
