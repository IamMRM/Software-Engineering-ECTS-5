#include <iostream>
#include<math.h>
using namespace std;

int* pointingMAX(int dataset[],int size)
{
    int *maxValue;
    int *ptr;
    ptr = dataset;
    maxValue = &dataset[0];
    for(int i=1;i<size;i++)
    {
        if(*maxValue < *(ptr+i))
        {
            maxValue = ptr+i;
        }
    }

    return maxValue;
}

int main(){
    cout<<"Task 5: Pointer usage\nEnter number of data values:";
    int *maxvalue;
    int size;
    cin >> size;
    int t[size];
    for(int i=0;i<size;i++)
    {
        cout <<"enter value :" << i+1 << endl;
        cin >> t[i];
    }
    maxvalue = pointingMAX(t,size);
    cout << "the maximum value of the dataset is : " << *maxvalue <<endl;
    return 0;
}
