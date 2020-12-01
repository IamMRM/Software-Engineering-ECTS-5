#include <iostream>
using namespace std;

enum scale {ounces, kilograms};
class ZooAnimal{
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      inline void changeWeightDate (int today){weightDate=today;}
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate(){return weightDate;}
      int daysSinceLastWeighed (int today);
      void isMotherOf(ZooAnimal&);
   };
void ZooAnimal::isMotherOf  (ZooAnimal &child){child.mother  = this;}

int main(){
	ZooAnimal bozo;
	//Following lines are commented as they relate to task 1 not 2.
    //bozo.Create ("Bozo", 408, 1027, 400);
    //cout << "This animal's name is " << bozo.reptName() << endl;
    //bozo.Destroy ();
	return 0;
}

