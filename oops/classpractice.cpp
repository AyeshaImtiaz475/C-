//class in oops

#include<iostream>
using namespace std;

class Car{
  public:

  //class data 
  string brand, model;
  int mileaga = 0;

  //class function 
  void drive(int distance)
  {
    mileaga = mileaga + distance;
  }

  //class function o print varaibles 
  void show_data()
  {
    cout<<"Brand :" <<brand <<endl;
    cout<<"Model :" <<model <<endl;
    cout<<"Distance drivem :" << mileaga << "miles" <<endl;
  }
};

int main()
{
    //create an object of car class
    Car my_car;

    //initialize varaibles of my_car;
    my_car.brand = "Honda";
    my_car.model = "Accord";
    my_car.drive(50);

    my_car.show_data();

    return 0;
}