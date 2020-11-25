#include <iostream>
using namespace std;

int * ascending_sorting(int* array, int sizeOfArray)
{
     std::cout << "Assending order.\n" << std::endl;
    int * x = array;
    int * y = array + 1;
    int m;

    for(int i=0;i<=sizeOfArray;i++)
    {
        for(int q=i+1;q<sizeOfArray;q++)
        {
            if(*array > *y)
            {
                m  = *array;
                *array = *y;
                *y =m;
            }
            array++;
            y++;
        }
        array = x;
        y = x + 1;
    }

    return array;
}

int main()
{	cout<<"Starting final task!\n";
    int array[10] = {1,65,9,546,8,15,97,5,494,20};
    int *sorted = ascending_sorting(array, 10);

    for(int i=0; i<10;i++)
        std::cout << *sorted++ << " ";

}
