#include <iostream>
using namespace std;
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
    	void Create(char* name,int cageNumber,int weightDate, int weight);
      	void Destroy (); // destroy function
      	char* reptName ();
      	int daysSinceLastWeighed (int today);};

void ZooAnimal::Create(char* namee,int cageNumber,int weightDate, int weight){
	name = namee;
    cageNumber=cageNumber;
    weightDate=weightDate;
    weight=weight;
}

void ZooAnimal::Destroy ()
   {	
    delete [] name;
   }

char* ZooAnimal::reptName (){
    return name;}

int ZooAnimal::daysSinceLastWeighed(int today){
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }
   
int main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    bozo.Destroy ();
   return 0;
   }
