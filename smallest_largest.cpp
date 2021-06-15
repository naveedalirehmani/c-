#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "inter three integers" << endl;
    cin >> num1 >> num2 >> num3;
    int large = num1;
    int small = num1;
    if (num3 > num2)
        large = num3;
    else if (num2 > num1)
        large = num2;
    if (num3 < num2)
        small = num3;
    else if (num2<num1)
        small = num2;
    cout << "the largest number is = " << large << endl;
    cout << "the smallest number is = " << small << endl;
    system("pause");
    return 0;
}