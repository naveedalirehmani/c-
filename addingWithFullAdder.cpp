#include <iostream>
using namespace std;

int main (){

    //TALKING INPUT OF THE LENGHT
    int binaryLength;
    cout<<"inter the lenght of the binary numbers"<<endl;
    cin>>binaryLength;
    binaryLength +=1;
    
    // TALKING INPUT OF THE BINARY VALUES
    int num1[binaryLength],num2[binaryLength];
    cout<<"inter the elements of the first binary"<<endl;
    for(int i = 0; i < binaryLength;  i++){
        if(i==0){
            num1[i]=0;
        }else{
        cin>>num1[i];
        }
    }
    cout<<"inter the elements of the second binary"<<endl;
    for(int i = 0; i < binaryLength;  i++){
        if(i==0){
            num2[i]=0;
        }else{
        cin>>num2[i];
        }
    }
    cout<<endl;

    // CHECK TO SEE THE VALUES OF ARRAYS

    // ADDITION OF THE VALUES
    int answer[binaryLength+1];
    int a=0,b=0,c=0;
    for(int i = 1; i < binaryLength+2; i++){
        a=num1[binaryLength-i];
        b=num2[binaryLength-i];
        if(a&&b&&c){
            c = 1;
            answer[i-1]=1; 
        }else if(a&&b || a&&c || b&&c){
            answer[i-1]=0;
            c = 1;
        }else if(a || b || c){
            answer[i-1]=1;
            c=0;
        }
    }

    // PRINTING RESULT
    for(int i = 1; i < binaryLength+1; i++){
        cout<<answer[binaryLength-i]<<" ";
    }

    // DEBUG
    cout<<endl;
    system("pause");
    return 0;
}