#include<iostream>
using namespace std;

int main(){

//     char button;
//     cout<<"Input a character:";
//     cin>>button;

//     if(button=='a'){
//         cout<<"Namaste"<<endl;
//     }
// else if(button=='b'){
//     cout<<"Hola"<<endl;

// }
// else if(button=='c'){
//     cout<<"Kamon Acho!"<<endl;
// }
// else if(button=='d'){
//     cout<<"BSDK"<<endl;
// }
// else{
//     cout<<"Put the right input!"<<endl;
// }
char button;
cout<<"Input a charecter: "<<endl;
cin>>button;
switch (button)
{
case 'a':
cout<<"Hello"<<endl;
    break;

case 'b':
    cout<<"Kemon Acho!"<<endl;
    break;    


default:
cout<<"Wrong choice"<<endl;
    break;
}
return 0;



    





}