// // // #include <iostream>
// // // using namespace std;

// // // // class define
// // // class Hero
// // // {
// // //     // properties
// // //     // int health;

// // //     // public:
// // //     //     int health;

// // //     // private:
// // //     //     char level;

// // //     //     void print()
// // //     //     {
// // //     //         cout << level << endl;
// // //     //     }

// // // // public:
// // // //     int health;
// // // //     char level;
// // // //     void print()
// // // //     {
// // // //         cout << level << endl;
// // // //     }
// // // };

// // // int main()
// // // {

// // //     // when there is empty class : Memory allocated for it is 1 byte
// // //     //  hero name ka object
// // //     // Hero h1;
// // //     Hero ramesh;
// // //     // ramesh.health = 90;
// // //     // ramesh.level = 'A';

// // //     // // cout << "size : " << sizeof(h1) << endl;

// // //     // cout << "Health is " << ramesh.health << endl;
// // //     // cout << "Health is " << ramesh.health << endl;
// // //     // // cout << "Level is " << ramesh.level << endl;
// // //     // cout << "Level is " << ramesh.level << endl;
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // class Hero
// // {
// //     // properties
// // private:
// //     int health;

// // public:
// //     char level;

// //     void print()
// //     {
// //         cout << level << endl;
// //     }

// //     int getHealth()
// //     {
// //         return health;
// //     }

// //     char getLevel()
// //     {
// //         return level;
// //     }

// //     void setHealth(int h)
// //     {

// //         health = h;
// //     }

// //     void setLevel(char ch)
// //     {
// //         level = ch;
// //     }

// //     // getter setter read and manipulate
// // };

// // int main()
// // {
// //     // Creation

// //     // Hero ramesh;
// //     // cout << "Ramesh health is " << ramesh.getHealth() << endl;
// //     // ramesh.setHealth(23); //use setter   //extra conditions can be addded
// //     // ramesh.level = 'A';

// //     // cout << "Health  is" << ramesh.getHealth() << endl;

// //     // cout << "Level is " << ramesh.level << endl;

// //     // cout<<sizeof(ramesh);      //padding //greedy

// //     // static allocation

// //   Hero Ramesh;

// // }

// // a

// #include <iostream>
// using namespace std;

// class Hero
// {

//     // properties
// private:
//     int health;

// public:
//     char *name;
//     char level;
//     static int timeToComplete;

//     Hero()
//     {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }

//     // Paramerterised Constructor
//     Hero(int health)
//     {
//         this->health = health;
//     }

//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     // copy constructor
//     Hero(Hero &temp)
//     {

//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout << "Copy constructor called" << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print()
//     {
//         cout << endl;
//         cout << "[ Name: " << this->name << " ,";
//         cout << "health: " << this->health << " ,";
//         cout << "level: " << this->level << " ]";
//         cout << endl
//              << endl;
//     }

//     int getHealth()
//     {
//         return health;
//     }

//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }

//     void setLevel(char ch)
//     {
//         level = ch;
//     }

//     void setName(char name[])
//     {
//         strcpy(this->name, name);
//     }

//     static int random()
//     {
//         return timeToComplete;
//     }

//     // Destructor
//     ~Hero()
//     {
//         cout << "Destructor bhai called" << endl;
//     }
// };

// int Hero::timeToComplete = 5;

// int main()
// {

//     // cout << Hero::timeToComplete << endl;
//     cout << Hero::random() << endl;

//     // Hero a;

//     // cout << a.timeToComplete << endl;

//     // Hero b;
//     // b.timeToComplete = 10 ;
//     // cout  << a.timeToComplete << endl;
//     // cout << b.timeToComplete << endl;

//     // //Static
//     // Hero a;

//     // //Dynamic
//     // Hero *b = new Hero();
//     // //manually destructor call
//     // delete b;

//     //     Hero hero1;

//     //     hero1.setHealth(12);
//     //     hero1.setLevel('D');
//     //     char name[7] = "Babbar";
//     //     hero1.setName(name);

//     //     //hero1.print();

//     //     //use default copy constructor

//     //     Hero hero2(hero1);
//     //     //hero2.print();
//     // //    Hero hero2 = hero1;

//     //     hero1.name[0] = 'G';
//     //     hero1.print();

//     //     hero2.print();

//     //     hero1 = hero2;

//     //     hero1.print();

//     //     hero2.print();

//     // //Hero tt;

//     // //object created statically
//     // Hero ramesh(10);
//     // //cout << "Address of ramesh " << &ramesh << endl;
//     // ramesh.print();

//     // //dynamically
//     // Hero *h =  new Hero(11);
//     // h->print();

//     // Hero temp(22, 'B');
//     // temp.print();

//     /*
//     //static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << "level is  " << a.level << endl;
//     cout << " health is " << a.getHealth() << endl;
//     //dynamicallly
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(70);
//     cout << "level is  " << (*b).level << endl;
//     cout << " health is " << (*b).getHealth() << endl;
//     cout << "level is  " << b->level << endl;
//     cout << " health is " << b->getHealth() << endl;
//     */

//     // //creation of Object
//     // Hero ramesh;
//     // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;

//     // cout << "Ramesh health is " << ramesh.getHealth() << endl;
//     // //use setter
//     // ramesh.setHealth(70);
//     // ramesh.level = 'A';

//     // cout << "health is: " << ramesh.getHealth() << endl;
//     // cout << "Level is: " << ramesh.level << endl;

//     // //cout << "size : " << sizeof(h1) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class hero
{

private:
    int health;

public:
    int points;
    string power; 
    char level;

    hero()
    {
        cout << "Constructor called -" << endl;
    }

    // parametrized constructor

    hero(int health, char level)
    {

        this->health = health; // point kr rha health ko
        this->level = level;   // jab this->level ki bat karo toh object ka address aur  bs level toh constructor ka parameter ke bat ho rhai
        cout << health << endl;
        cout << level << endl;

    }
    hero(int health)
    {
        // health = health;   //health ke andar health dal rahe hai
        cout << "this address is " << this << endl;
        this->health = health; // point kr rha health ko
        cout << health << endl;
    }

    int getheal()
    {
        return health;
    }

    void print()
    {
        // return power /;
        cout<<power<<endl;       
    }

    void setheal(int h)
    {
        health = h;
    }

    char getLevel()
    {
        return level;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // object created statically

    // cout << "Hi" << endl;
    // hero sam;
    // cout << "Hello" << endl;
    hero sam(100);
    hero power = 'c';

    hero gandu(101 , 'B');
    cout << "Address of sam " << &sam << endl;
    sam.print();
    cout << endl;
    cout << endl;


    // dynamically

    hero *h = new hero(100);

    hero temp(1000, 'A');
    //  hero health(122);
    h->print();

    cout << "Constructor called dynamically " << endl;
























    /*
    // static allocation
    // hero ramesh;
    hero a;
    a.setheal(19);
    a.level = 'A';
    cout << "lvel is " << a.level << endl;
    cout << "health is " << a.getheal() << endl;

    // dynamic allocation just like normal dynamic allocation we can allocate the class
    hero *b = new hero;
    // b->level = 'B';
    b->setLevel('S');

    b->setheal(18);

    cout << "level is " << (*b).level << endl;
    cout << " another level is " << (*b).getLevel() << endl;
    cout << "health is " << (*b).getheal() << endl;

 //        ------------- alternative implementation ---------

    cout << "level is " << b->level << endl;
    cout << "Health is " << b->getheal() << endl;
    cout << "Level is " << b->getLevel() << endl;
    // cout << ramesh.getheal() << endl; // use of getter

    // // use of setter

    // ramesh.setheal(19);               // use to set values to health
    // cout << ramesh.getheal() << endl; //  use to access the health section as it is private
    */
}
