#include<iostream>
using namespace std;

int main(){

    // int arr[]={1,2,3,4,5};
    // int size;
    
    // //cout<<sizeof(arr)<<endl;
    //  size =sizeof(arr)/sizeof(arr[0]);

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<endl;
    // }

    // //for each loop

    // for(int ele:arr){
    //     cout<<ele<<endl;
    // }

    // //while loop

    // int i=0;

    // while( i<size){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    // int n;
    // cout<<"Input No: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Input no of array: "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"Output is: "<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    char vowels[5];
    char elements;
    cout<<"Input Elements: ";
    cin>>elements;

    for(char &elements: vowels){
        cin>>elements;
    }
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";

    }

    return 0;
}