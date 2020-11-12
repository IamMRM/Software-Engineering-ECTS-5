#include <iostream>
#include <vector>
using namespace std;

float area_helper(float radius){return 3.14*radius*radius;}
float area(float diameter){
	float radius = diameter/2;
	return area_helper(radius);}
float circum(float diameter){
	float radius = diameter/2;
	return 2*radius*3.14;}
	
void vector_elements(vector<int> v){int smallest_element = v[0];
	int largest_element = v[0];
	for(int i = 1; i < v.size(); i++)  //start iterating from the second element
	{if(v[i] < smallest_element){smallest_element = v[i];}
	 if(v[i] > largest_element){largest_element = v[i];}
	}
   	cout << "The smallest element is "<<smallest_element;
   	cout << "\nThe biggest element is "<<largest_element;}

void fibonacci(int n){
	int t1 = 0, t2 = 1, nextTerm = 0;
	cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
   nextTerm = t1 + t2;
    while(nextTerm <= n)
    {   cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;}}
	
void multiplication_table(int n){
	for(int i =1; i<=10;i++){
		cout << n << " * " << i << " = " << n * i << endl;}}

void truth_tables(){
	int x=1,y=1,z=1;//for three inputs
	cout<<"Truth table for AND (3 inputs)\n";
	cout<<" i "<<" j "<< " k "<<"= result\n";
	for(int i =0;i<=x;i++){
		for(int j=0;j<=y;j++){
			for(int k=0;k<=z;k++){
				if (i&j&k){cout<<" "<<i<<"  "<<j<<"  "<<k<<" = "<<"1\n";}
				else{cout<<" "<<i<<"  "<<j<<"  "<<k<<" = "<<"0\n";}
			}
		}
	}
	cout<<"Truth table for OR (3 inputs)\n";
	cout<<" i "<<" j "<< " k "<<"= result\n";
	for(int i =0;i<=x;i++){
		for(int j=0;j<=y;j++){
			for(int k=0;k<=z;k++){
				if (i||j||k){cout<<" "<<i<<"  "<<j<<"  "<<k<<" = "<<"1\n";}
				else{cout<<" "<<i<<"  "<<j<<"  "<<k<<" = "<<"0\n";}
			}
		}
	}
}

int main() {
   cout << "Lab 1 of Software Engineering! \n\n";
   cout << "Task 1: \n";
   float diam;
   cout << "Input Diameter: ";
   cin >> diam;
   cout <<"The area is "<< area(diam)<<" \n";
   cout <<"The circumference is "<<circum(diam)<<" \n";
   cout << "******************************************************DONE************************************************************************\n\n";
   
	cout << "Task 2: Smallest and Biggest element of Vector {1, 2, 3, -1, -2, -3}\n";//these values are taken as random values. It will work with all values
	vector<int> v;
	v.push_back(1);v.push_back(2);v.push_back(3);v.push_back(-1);v.push_back(-2);v.push_back(-3);//pushing elements in out vector
	vector_elements(v);
   cout << "\n*******************************************************DONE***********************************************************************\n\n";
   
   cout << "Task 3: Fibonacci Sequence \n";
   cout << "Enter the rank: ";
   int n;
   cin >> n;
   fibonacci(n);
    cout << "\n*****************************************************DONE*************************************************************************\n\n";
   
   cout << "Task 4: Enter an integer for its multiplication table.\n";
   int q;
   cin >> q;
   multiplication_table(q);
   cout << "*******************************************************DONE***********************************************************************\n\n";
   
   cout << "Task 5: Truth tables of AND OR \n";
   truth_tables();
   cout << "*******************************************************DONE***********************************************************************\n\n";
   return 0;
}
