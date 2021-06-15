#include<iostream>
using namespace std;

void smallestFunction(int array[10]);
void largestFunction(int array[10]);
void mostOccuring(int array[10]);

int main (){
    // TAKING INPUT FROM THE USER
    int array[10];
    cout<<"inter an array of ten integers"<<endl;
    for(int i = 0 ; i < 10 ; i++)
        cin>>array[i];
    // CALLING THE FUNCTIONS
    smallestFunction(array);
    largestFunction(array);
    mostOccuring(array);
    //END
    cout<<endl;
    system("pause");
    return 0;
}

// CHECKING FOR THE SMALLEST VALUE
void smallestFunction(int array[10]){
    int smallest = array[0];
    for(int i = 0 ; i < 10 ; i++){
        if(array[i]<smallest)
            smallest = array[i];
    };
    cout<<"this is the smallest numebr"<<smallest<<""<<endl;
}
// CHECKING FOR THE LARGEST VALUE
void largestFunction(int array[10]){
    int largest = array[0];
    for(int i = 0 ; i < 10 ; i++){
        if(array[i]>largest)
            largest = array[i];
    };
    cout<<"this is the largest number "<<largest<<endl;
}
// CHECKING FOR THE MOST OCCURING VALUE
void mostOccuring(int array[10]){
    int mostOccuring,highScore=0,count=0;
    for(int i = 0 ; i < 10 ; i++){
        for(int k = 0 ; k < 10 ; k++){
            if(array[i]==array[k]){
                count++;
            };
        };
        if(count>highScore){
            mostOccuring=array[i];
            highScore=count;
        }
        count=0;
    };
    cout<<"this is the most occuring element "<<mostOccuring<<endl;
}