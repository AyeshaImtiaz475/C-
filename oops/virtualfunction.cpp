#include<iostream>
using namespace std;

class GFG_base{
  public:
  virtual void display()
  {
    cout<<"Called virtual base function\n";
  }
  void print()
  {
    cout<<"Called GFG_Base print function\n";
  }
};

class GFG_Child: public GFG_base{
   public:
    void display()
  {
    cout<<"Called virtual child function\n";
  }
  void print()
  {
    cout<<"Called GFG_Child print function\n";
  }
};

int main()
{
    GFG_base* base;
    GFG_Child child;

    base = &child;

    base->display();
    base->print();

    return 0;
}