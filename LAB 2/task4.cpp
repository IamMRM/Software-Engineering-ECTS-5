#include <iostream>
using namespace std;

void pascal(int size){
	int array[size][size];
	cout<<"The traingle for size "<<size<<" is:\n";
	for (int i=0;i<size;i++){
		for(int j=0;j<=i;j++){
			if(j==0){
				array[i][j]=1;}
			else if(i==j){
				array[i][j]=1;
			}else{
				array[i][j]=array[i-1][j-1]+array[i-1][j];
			}
		}
	}
	
	for(int i =0;i<size;i++){
		for(int j=0;j<=i;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	cout<<"Starting 4th Task: Pascal Triangles.\nInput the size of pascal triangle you want to see.\n";
	int size;
	cin>>size;
	pascal(size);
	return 0;
}
