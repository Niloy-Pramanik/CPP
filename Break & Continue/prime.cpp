// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i;

//     for( i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Non prime"<<endl;
//             break;
//         }

//     } 
//     if(i==n){
        

//     }


//     cout<<"Prime"<<endl;
//     return 0;
  




// }

#include<iostream>
using namespace std;

int main(){
    int a,b;
    int i;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
        
    }
    return 0;




}