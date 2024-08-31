/* Objects: Entity is the state of properties and behaviour*/
/*Why we want to present our objects in programming: Readability, useability and learnability*/

/*Object is the instance of a class*/
/*Access modifiers: public, private and protected, by default the public access modifier is in the class*/
/*Private access modififer is accessible only within the class*/
/* Padding / greedy alignment*/
/*When ever the object is created the constructor(no return type,same as class name) is called*/

/*Shallow and deep copy */
/*Default constructor : shallow copy*/

#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class hero {
    // Properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timetoComplete;

    // Default constructor
    hero() {
        cout << "Simple constructor is called" << endl;
        name = new char[100]; // Allocate memory for name
    }

    // Parameterized constructor
    hero(int health) : health(health) {
        cout << "this: " << this << endl;
        name = new char[100]; // Allocate memory for name
    }

    hero(int health, char level) : health(health), level(level) {
        cout << "this: " << this << endl;
        name = new char[100]; // Allocate memory for name
    }

    // Copy constructor & deep copy 
    hero(const hero& temp) : health(temp.health), level(temp.level) {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        name = new char[100]; // Allocate memory for name
        strcpy(name, temp.name); // Copy the name
    }

    // Destructor
    ~hero() {
        delete[] name; // Free the allocated memory
    }

    // Methods to access and modify private members
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(const char name[]) {
        strcpy(this->name, name); // Copy the name
    }

    static int random()
    {
        return timetoComplete;
    }

    void print() {
        cout << endl;
        cout << "name: " << this->name << endl;
        cout << "health: " << this->health << endl;
        cout << "level: " << this->level << endl;
    }
   
};
//static keyword
int hero::timetoComplete =5;

//static functions
//no this keyword
//object create ki zarood nahi ha 

int main() {
    cout<< hero::timetoComplete << endl;
    cout<< hero::random() <<endl;
    hero a;
    cout<<a.timetoComplete <<endl;

    hero b;
    b.timetoComplete = 10;
    cout<<a.timetoComplete <<endl;
    cout<<b.timetoComplete <<endl;


    // //static
    // hero a;

    // //dynamically 
    // hero *b= new hero();
    // //manually destructor called 
    // delete b;


    // hero h1;
    // h1.setHealth(70);
    // h1.setLevel('C');
    
    // char name[7] = "Babber";
    // h1.setName(name);
    // //h1.print();

    // //default constructor
    // hero h2(h1);
    // //h2.print();

    // h1.name[0] = 'G';
    // h1.print();

    // h2.print();
    // h1=h2;
    // h1.print();

    // return 0;
}


   // hero h1(80);
    // //cout<<"Address of hero:" <<&h1 <<endl;
    // //h1.getHealth();
    // h1.print();



    // //dynamically created object
    // hero *h2 = new hero(11);
    // h2-> print();

    // hero temp(22,'B');
    // temp.print();

    //object created statically
    // cout<<"hi" <<endl;
    // hero h1;
    // cout<<"hello, World" <<endl;
 //static allocation 
    // hero h1;
    // h1.setHealth(80);
    // h1.setLevel('B');
    // cout<<"Level is:" <<h1.level<<endl;
    // cout<<"Health is:" <<h1.getHealth()<<endl;

    // //dynamic allocation
    // hero *h2 = new hero;
    // h2->setLevel('A');
    // h2->setHealth(70);
    // cout<<"Level is:" <<(*h2).level<<endl;
    // cout<<"Health is:" <<(*h2).getHealth()<<endl;




    // //creation of objects
    // hero h1;
    // cout<< "Hero health is:" <<h1.getHealth() <<endl;
    
    // h1.level = 'A';
    // h1.setHealth(70);
    // cout<<"Health is:" <<h1.getHealth() <<endl;
    //  cout<<"Level is:" <<h1.level <<endl;


    // //when ever a object is created the sizeof object for track is 1 byte
    // //cout<<"Size of :"<<sizeof(h1)<<endl; 