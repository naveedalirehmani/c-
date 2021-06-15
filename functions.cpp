#include <iostream>
// #include <string>
using namespace std;

void addition(int num1, int num2);
void subtraction(int num1, int num2);
void multiplication(int num1, int num2);
void division(int num1, int num2);

int main()
{
  int num1, num2;
  char op,y;
  cout << "inter a number";
  cin >> num1;
  cout << "inter the second number";
  cin >> num2;
  jump:
  cout << "choose the operator - + / *";
  cin >> op;
  switch (op){
  case '+':
    addition(num1, num2);
    break;
  case '-':
    subtraction(num1, num2);
    break;
  case '*':
    multiplication(num1, num2);
    break;
  case '/':
    division(num1, num2);
    break;
  default:
    cout << "Error! operator is not correct";
    break;
  }
  cout<<"calculate again? y:continue";
  cin >> y;
  if(y == 'y'){
    goto jump;
  }
  system("pause");
  return 0;
}

void addition(int num1, int num2)
{
  cout<< num1 + num2<<endl;
}
void subtraction(int num1, int num2)
{
  cout<< num1 - num2<<endl;
}
void multiplication(int num1, int num2)
{
  cout<< num1 * num2<<endl;
}
void division(int num1, int num2)
{
  cout<< num1 / num2<<endl;
}