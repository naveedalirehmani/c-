#include <iostream>
using namespace std;

class Vehical{
    public:
        string brand = "Land Rover";
        void honk();
};

void Vehical::honk(){
    cout<<"tut too000OOO"<<endl;
};

class Car: public Vehical{
    public:
        string model = "Range Rover";
};

int main(){
    Car carObject;
    cout<<carObject.brand<<endl;
    cout<<carObject.model<<endl;
    carObject.honk();
}