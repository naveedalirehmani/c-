#include <iostream>
using namespace std;


// classes
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    int myConstrutorValue;
    MyClass(int x){
        myConstrutorValue = x;
    }
    void inClassMethod(){
        cout<<"I am inClassMethod"<<"\n";
    };
    void outClassMethod();
};

void MyClass::outClassMethod(){
    cout<<"I am outClassMethod"<<"\n";
};

// main function
int main() {
  MyClass myObj(10);      // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << " " << myObj.myString << " " << myObj.myConstrutorValue << "\n";

  myObj.inClassMethod();
  myObj.outClassMethod();
  return 0;
}
