#include <iostream>
#include<math.h>
using namespace std;

int i;

void change_value(int* array)
{
    std::cout<<"Enter 5 values: "<<"\n";
    for(i=0;i<5;i++)
    {
        std::cin>>*(array+i);
    }
    std::cout<<"Integer values are: "<<"\n";
    for(i=0;i<5;i++)
    {
        std::cout<<*(array+i)<<" ";
    }
}

int main(){
    int array[100];
    change_value(array);
    return 0;
}
