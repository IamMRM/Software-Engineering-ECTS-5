#include <iostream>
using namespace std;

int great(int arr[10]){
	for(int i = 1;i < 10; ++i){if(arr[0] < arr[i]){arr[0] = arr[i];}}
    return arr[0];}
int small(int arr[10]){
	for(int i = 1;i < 10; ++i){if(arr[0] > arr[i]){arr[0] = arr[i];}}
    return arr[0];}
    
int occ(int array[],int n)
{
    int topelement, topCount=0, count;
    for(int i = 0; i< 10; i++){
        count = 1;
        for(int j = i+1; j < 10; j++){
            if(array[j] == array[i]){
                count++;
                if(count > topCount){
                    topCount = count;
                    topelement = array[j];}
            }
        }
    }
	return topelement;}

int main(){
	cout<<"Starting Task 2: Playing with Integer values ;)\n";
	cout<<"Now enter 10 integer values.\n";
	int num[10];
	for(int i=0;i<10;i++){cin>>num[i];}
	cout<<"The greatest value of this array is: "<<great(num)<<"\n";
	cout<<"The smallest value of this array is: "<<small(num)<<"\n";
	cout<<"The most occuring value of this array is: "<<occ(num,10)<<"\n";
	return 0;
}
