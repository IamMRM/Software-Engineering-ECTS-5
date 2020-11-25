#include <iostream>
using namespace std;

int add(int choice1,int choice2){return choice1+choice2;}
int sub(int choice1,int choice2){return choice1-choice2;}
int mul(int choice1,int choice2){return choice1*choice2;}
float divide(int choice1,int choice2){
	if (choice2!=0){
		return choice1/choice2;}
	else{
		cout<<"Wrong choice of inputs.\n";}
		return 0.0;}
int mod(int choice1,int choice2){return choice1%choice2;}

int main(void){
	cout<<"***********************************************************************\n";
	cout<<"Starting Task 1: Calculator\n";
	char continuee;
	do {
		cout<<"MENU\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n";
		int choice,choice1,choice2,result;
		cout<<"Enter your choice: ";
		cin>>choice;
		cout<<"\nEnter your two numbers: ";
		cin >> choice1 >> choice2;
	    switch (choice) {
	        case 1: {
	            cout << "Result: " << add(choice1, choice2) << "\n";
	            break;
	        }
	        case 2: {
	            cout << "Result: " << sub(choice1, choice2) << "\n";
	            break;
	        }
	        case 3: {
	            cout << "Result: " << mul(choice1, choice2) << "\n";
	            break;
	        }
	        case 4: {
	            cout << "Result: " << divide(choice1, choice2) << "\n";
	            break;
	        }
	        case 5: {
	            cout << "Result: " << mod(choice1, choice2) << "\n";
	            break;
	        }}
	
	        cout << "\n Continue? ";
	        cin >> continuee;
    } while (continuee == 'y' || continuee == 'Y');
	
	return 0;
}
