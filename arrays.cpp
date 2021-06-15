#include<iostream>
// #include<iostring>
using namespace std;

int main (){
    // int array[]={1,2,3,4,4};
    // for(int i = 0; i<5;i++){
    //     cout<<array[i];
    // };


    string name="naveed";
    string* address = &name;
    cout<<address<<"\n";
    cout<<*address<<"\n";
    cout<<name<<"\n";
    *address="rehman";
    cout<<address<<endl;
    cout<<name<<endl;

    system("pause");
    return 0;
}