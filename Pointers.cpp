#include<iostream>
using namespace std;

int main (){
    int* array[5];
    int* value;
    int integer;
    cout<<"inter an array of 5 integers";
    for(int i = 0 ; i < 5 ; i++){
        cin>>integer;
        array[i]= &integer;
    };
    for(int i = 0 ; i < 5 ; i++){
        cout<<"address = "<<array[i];
        value = array[i];
        cout<<" value = "<<*array[i]<<endl;
    };


    // string name = "naveed";
    // string* address = &name;
    // cout<<address<<endl;
    // cout<<*address<<endl;
    // *address = "rehmani";
    // cout<<address<<endl;
    // cout<<name<<endl;

    system("pause");
    return 0;
}