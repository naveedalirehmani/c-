#include <iostream>
using namespace std;

int main(){
    // INITIALIZING INTEGERS
    int random[10],randomArrayForAccendingOrder[10];
    int sortedDecending[10],sortedAccending[10], var;
    cout << "inter and array 10 integers long" << endl;
    for (int j = 0; j < 10; j++){
        cin>>random[j];
        randomArrayForAccendingOrder[j] = random[j];
    };
    // SORTING ARRAYS IN DECENDING ORDER FROM LARGEST TO SMALLEST 
    for (int i = 0; i < 10; i++){
        var = random[i];
        for (int k = 0; k < 10; k++){
            if (random[k] > var){
                var = random[k];
            };
        };
        sortedDecending[i] = var;
        for (int j = 0; j < 10; j++){
            if (var == random[j]){
                random[j] = 0;
            };
        };
    };
    // PRINTING OUT ARRAY IN DECENDING ORDER
    cout<<"This is the sorted array in decending order"<<endl;
    for (int j = 0; j < 10; j++){
        cout << sortedDecending[j]<<" ";
    };
    
    // SORTING ARRAYS IN ACCENDING ORDER FROM SMALLEST TO LARGEST
    for (int i = 0; i < 10; i++){
        var = randomArrayForAccendingOrder[i];
        for (int k = 0; k < 10; k++){
            if (randomArrayForAccendingOrder[k] < var){
                var = randomArrayForAccendingOrder[k];
            };
        };
        sortedAccending[i] = var;
        for (int j = 0; j < 10; j++){
            if (var == randomArrayForAccendingOrder[j]){
                randomArrayForAccendingOrder[j] = 99999;
            };
        };
    };
    // PRINTING OUT ARRAY IN ACCENDING ORDER
    cout<<endl<<"This is the sorted array in accending order"<<endl;
    for (int j = 0; j < 10; j++){
        cout << sortedAccending[j]<<" ";
    };
    system("pause");
    return 0;
}