#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,54,78,23,57,26,78,23,74,36};
    int sum=0;
    float avg;
    for(int i=0; i<10; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"the sum of the marks is: "<<sum<<endl;
     avg = sum/10;

    cout<<"the average is: "<<avg;
}
