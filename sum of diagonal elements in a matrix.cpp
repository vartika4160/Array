#include <iostream>
using namespace std;
int main(){
    int r,c,sum=0,count=0;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            if(i==j){
                sum = sum+A[i][j];
            }else if(i+j==r-1){
                count= count+A[i][j];
            }
            
        }
    }
    cout<<"The sum of diagonal elements (from left to right) of Matrix A is: "<<sum<<endl;
    cout<<"The sum of diagonal elements (from right to left) of Matrix A is: "<<count;
    return 0;
}
