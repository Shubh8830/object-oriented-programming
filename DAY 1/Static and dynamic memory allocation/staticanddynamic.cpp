#include <iostream>
using namespace std;
class Hero
{
private:
    int health=5;

public:
    char level ='A';

    // getter
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }

    // setter
    int sethealth(int h1)
    {
        health = h1;
    }
    char setlevel(char l1)
    {
        level = l1;
    }
};
int main()
{

    // ye static memory allocation hai
    Hero shubh;
    cout<<endl<<"Shubh ki Health : "<<shubh.gethealth()<<endl;
    cout<<"Shubh ka level : "<<shubh.getlevel()<<endl<<endl<<endl;

    // ye dynamic memory allocation hai
    Hero *saurabh = new Hero;
    cout<<endl<<"Saurabh ki Health : "<<(*saurabh).gethealth()<<endl;
    cout<<"Saurabh ka Level : "<<(*saurabh).level<<endl<<endl<<endl;

    //alternative ese bhi likh skte hain
    cout<<endl<<"Saurabh ka Level : "<<saurabh->level<<endl;
    cout<<"Saurabh ki Health : "<<saurabh->gethealth()<<endl<<endl;

    return 0;
}