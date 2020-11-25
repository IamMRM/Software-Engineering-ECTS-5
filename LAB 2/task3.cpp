#include <iostream>
using namespace std;

//here used selection sort for sorting the values
void sortd(int a[]){
	int i, j, min, temp,n=10;
	for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;}
	
	for (i = 0; i < n; i++){cout<< a[i] <<" ";}
}

int main(){
	cout<<"Starting Task 3: Sorting of an array.\n";
	int array[10];
	cout<<"Enter the integer numbers for the array.\n";
	for(int i=0;i<10;i++){cin>>array[i];}
	cout<<"The sorted array would be: \n";
	sortd(array);
	return 0;
}
