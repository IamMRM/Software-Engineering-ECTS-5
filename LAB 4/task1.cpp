#include<iostream>
using namespace std;

class rectangle//making a class for using its attributes and functions
   {
    private:
      float length;
      float width;
    public:
        rectangle(float l,float w){
            length=l;
            width=w;}
            
        float area_rectangle (){return length*width;}//as area of rectangle = length x width
          };
        
int main(){
    cout<<"Welcome to Task 1 (area of rectangle) of final practice.\n"<<"Please enter length: ";
    float l,w;
    cin>>l;
    cout<<"Please enter width: ";
    cin>>w;
    rectangle a(l,w);//a is an object of rectangle class
    cout<<"\nThe area is "<<a.area_rectangle();
    cout<<"\n*****************************THE END*************************";
    return 0;
}
