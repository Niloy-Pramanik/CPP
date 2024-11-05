// //1
// //1 1
// //1 2 1
// //1 3 3 1
// //1 4 6 4 1

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }

// int main(){

//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};  // Example array to sort
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than the key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // Insert the key at its correct position
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
