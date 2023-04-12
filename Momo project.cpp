#include <iostream>
using namespace std;

int main() {
	const int default_pin = 0000;
	int attempts = 0,input,recipient_number,pin,old_pin, new_pin;
	string reference;
	float amount;
	float balance=1000;
	
cout<<"Welcome to Mobile Money Service"<<endl;
cout<<"1. Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Transfer Money "<<endl;
cin>>input;
if(input==1)
{
	do{
		cout<<"Please enter your 4-digit PIN: "<<endl;
		cin>> pin;
		attempts++;
		if (pin != default_pin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== default_pin){
			cout<<"Your balance is "<<balance<<endl;	
		}
	} while (pin != default_pin && attempts <3);
	if(attempts>3){
		cout<<"Enough attempts reached."<<endl; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}
}

else if(input==2)
{
	cout<<" Enter Old Pin  "<<endl;
	cin>>old_pin;
	
	if(old_pin==default_pin){
		cout<<"Enter New Pin" <<endl;
		cin>>new_pin;
		old_pin!=new_pin;
		cout<<" Your New Pin Is "<<new_pin;
		
	}
}
else if(input==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>recipient_number;
	cout<<"Enter Amount  "<<endl;
	cin>>amount;

	do{
	
		if (amount>balance){
			cout<<"Insufficient Balance" <<endl;
			cout<<"Exiting"<<endl;
		}
		else if (amount<=balance){
			cout<<"send      "<< amount<<"     to"<<recipient_number<<endl;
			
		}
	} while (amount != balance && attempts >3);
	if(attempts>3){
		cout<<"Invalid amount."<<endl; 
	}	
	   cout<<"Enter Reference"<<endl;
	   cin>>reference;
	   cout<<"Enter pin"<<endl;
	   cin>>pin;
	   pin==new_pin;
	   cout<<" You have transfered   "<<amount<<"     to "<<recipient_number<<endl;
	

}
	return 0;
}
