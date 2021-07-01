#include <iostream>
using namespace std;

class Mammal{
    public:
        void mammalMethod(){
            cout<<"I am a Mammal"<<endl;
        }
};
class MarineAnimal{
    public:
        void marineAnimalMethod(){
            cout<<"I am a MarineAnimal"<<endl;
        }
};
class BlueWhale:public MarineAnimal,public Mammal{
    public:
        void blueWhaleMethod(){
            cout<<"I am a Blue Whale I am both Mammal and Marine Animal"<<endl;
        };
};

int main (){
    Mammal mammalObject;
    MarineAnimal marineAnimalObject;
    BlueWhale blueWhaleObject;
    mammalObject.mammalMethod();
    marineAnimalObject.marineAnimalMethod();
    blueWhaleObject.mammalMethod();
    blueWhaleObject.marineAnimalMethod();
    blueWhaleObject.blueWhaleMethod();
    system("pause");
    return 0;
}