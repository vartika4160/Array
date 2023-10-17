#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and column of the matrix: ";
    cin>>r>>c;
    int A[r][c],B[r][c],X[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    
    cout<<"Enter the elements of Matrix B: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>B[i][j];
        }
    }
    
    cout<<"The resultant Matric X is: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            X[i][j]=A[i][j] + B[i][j];
            cout<<X[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
