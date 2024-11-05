#include<iostream>
using namespace std;

int main(){

    int arr[]={19,10,18,20,4};
    int max=arr[0];
    int min=arr[0];

    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"Max= "<<max<<endl;
    cout <<"Min= "<<min<<endl;




}