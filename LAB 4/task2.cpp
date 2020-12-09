#include<iostream>
using namespace std;

class constructing  
   {
    private:
      int num1;
      int num2;
    public:
    	constructing(int l,int w){
    		num1=l;
    		num2=w;}
    		
      	int add_nums(){return num1+num2;}//returning the sum of its private variables
		  };
      	
int main(){
	cout<<"Welcome to Task 2 (adding numbers) of final practice.\n"<<"Please enter first number: ";
	int l,w;
	cin>>l;
	cout<<"Please enter second number: ";
	cin>>w;
	constructing a(l,w);//calling the constructor
	cout<<"\nThe addition is "<<a.add_nums();
	cout<<"\n*****************************THE END*************************";
	return 0;
}
