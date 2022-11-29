#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    // private:
    char level;
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
    
    
    }
};
int main(){
    Hero saurabh(8,'A');
   cout<<saurabh.gethealth()<<endl;
   cout<<saurabh.getlevel()<<endl<<endl;


   cout<<"Copy constructor called"<<endl<<endl;






    Hero shubh(saurabh);
    cout<<shubh.gethealth()<<endl;
    cout<<shubh.getlevel()<<endl;


    return 0;
}