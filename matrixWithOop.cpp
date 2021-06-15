#include <iostream>
#include <array>
using namespace std;

// CLASSES

class Matrix{
    public:
        int rowLenght = 0;
        int columnLenght = 0;
        float matrix1[100][100];
        float matrix2[100][100];
        int value= 0;
        // TAKING INPUT
        void takingInput(){
            cout<<"inter the row lenght of your matrixses"<<"\n";
            cin>>rowLenght;
            cout<<"inter the column lenght of your matrixses"<<"\n";
            cin>>columnLenght;
            // TAKING MATRIX VALUES
            cout<<"for matrix number 1"<<endl;
            for(int i = 0 ; i < rowLenght; i++){
                cout<<"inter the value of elements in row " << i+1 <<endl;
                for(int k = 0 ; k < columnLenght ; k++){
                    cout<<" ";
                    cin>>matrix1[i][k];
                };
            };
            cout<<"for matrix number 2"<<endl;
            for(int i = 0 ; i < rowLenght; i++){
                cout<<"inter the value of elements in row " << i+1 <<endl;
                for(int k = 0 ; k < columnLenght ; k++){
                    cout<<" ";
                    cin>>matrix2[i][k];
                };
            };
        }
        // METHOD FOR ADDITION
        void additionMethod(){
           for(int i = 0 ; i < rowLenght; i++){
              for(int k = 0 ; k < columnLenght ; k++){
                  cout<<" ";
                  cout<<matrix1[i][k]+matrix2[i][k];
              };
              cout<<endl;
           };
        };
        // METHOD FOR SUBTRACTION
        void SubtractionMethod(){
            for(int i = 0 ; i < rowLenght; i++){
              for(int k = 0 ; k < columnLenght ; k++){
                  cout<<" ";
                  cout<<matrix1[i][k]-matrix2[i][k];
              };
              cout<<endl;
           };
        };
        // METHOD FOR DIVISION
        void divisionMethod(){
            for(int i = 0 ; i < rowLenght; i++){
              for(int k = 0 ; k < columnLenght ; k++){
                cout<<" ";
                cout<<matrix1[i][k]/matrix2[i][k];
              };
              cout<<endl;
           };
        };
        // METHOD FOR MULTIPLICATION
        void MultiplicationMethod(){
            for(int i = 0 ; i < rowLenght; i++){
                for(int j = 0 ; j < columnLenght ; j++){
                    for(int k = 0 ; k < columnLenght ; k++){
                        value += matrix1[i][k]*matrix2[k][j];
                     };
                    cout<<value<<" ";
                    value = 0;
                }
                cout<<endl;
           };
        };
};

//  MAIN FUCTION
int main(){
    char op;
    // CREATING AN OBJECT WITH THE MATRIX CLASS
    Matrix matrixLibrary;
    // CALLING FOR INPUT METHOD
    matrixLibrary.takingInput();
    jump:
    cout<<"+ - / * select an operator to operate on matrices and e to exit"<<"\n";
    cin>>op;
    // CALLING FOR METHODS
    switch(op){
        case '+':
            matrixLibrary.additionMethod(); 
        break;
        case '-':
            matrixLibrary.SubtractionMethod(); 
        break;
        case '/':
            matrixLibrary.divisionMethod(); 
        break;
        case '*':
            matrixLibrary.MultiplicationMethod(); 
        break;
        case 'e':
            return 0;
        break;
        default:
            cout<<"select and operator from the metioned above"<<"\n";
        break;
    }

    goto jump;
    system("pause");
    return 0;

}




