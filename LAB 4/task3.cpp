#include <iostream>
using namespace std;

class add_complx
{
	private:
		int real, imaginary;//private variables only accessible in this class
	public :  
      	add_complx(int r, int i){//constructor for initializing the private variables
      	real =r;
      	imaginary=i;}
      	
	  	int get_real(){return real;}
		int get_imaginary(){return imaginary;}
	};

int main()
{	
	int temp1,temp2;//temporary variables just for storing value
	
	cout << "Last task of adding two complex numbers.\n";
	cout << "Enter a and b where a + ib\n";
	cout << "\na = ";
	cin >> temp1;
	cout << "b = ";
	cin >> temp2;
	add_complx a(temp1,temp2);//first complex number initialized
	
	cout << "Enter c and d where c + id\n";
	cout << "\nc = ";
	cin >> temp1;
	cout << "d = ";
	cin >> temp2;
	add_complx b(temp1,temp2);//second complex number initialized
	
	if (a.get_imaginary()+b.get_imaginary() >= 0)
	  cout << "Answer = " << a.get_real()+b.get_real() << " + " << a.get_imaginary()+b.get_imaginary() << "i";//using getter functions for using private variables.
	else
	  cout << "Answer = " << a.get_real()+b.get_real() << " " << a.get_imaginary()+b.get_imaginary() << "i";
	
	cout<<"\n\n***********THE END**********************";
   return 0;
}
