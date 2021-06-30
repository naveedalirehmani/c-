#include <iostream>
using namespace std;

void billingForResidentialService();
void billingForBusinessService();

int main(){
    jump:
    cout<<"What is your service Subscription for \n1. for Residential\n2. for Business"<<endl;
    int serviceType=0;
    cin>>serviceType;
    if(serviceType == 1){
        billingForResidentialService();
    }else if(serviceType == 2){
        billingForBusinessService();
    }else{
        cout<<"Please select a proper service that you are subscribed to"<<endl;
        goto jump;
    }
    system("pause");
    return 0;
}

void billingForResidentialService(){
    cout<<"How many premium channels are you subscribed to?"<<endl;
    int totalPremiumChannels=0,ResidentialCustomerFee=1500;
    cin>>totalPremiumChannels;
    cout<<"your bill for \n"<< totalPremiumChannels << " numbers of premium channels on Residential account is "<<" Rs"<< ResidentialCustomerFee+totalPremiumChannels*50<<endl;
}
void billingForBusinessService(){
    cout<<"How many premium channels are you subscribed to?"<<endl;
    int totalPremiumChannels=0,BusinessCustomerFee=1000;
    cin>>totalPremiumChannels;
    cout<<"What are your number of basic service connections"<<endl;
    int totalBasicServiceConnections=0;
    cin>>totalBasicServiceConnections;
    cout<<"Your bill for \n"<<totalPremiumChannels<<" numbers of premium channels on \n"<< totalBasicServiceConnections <<" basic connections for a Business account is\n"<<" Rs"<<BusinessCustomerFee+totalPremiumChannels*50+totalBasicServiceConnections*40<<endl;
}