#include<iostream>
using namespace std;
class Hero{
    // private:
    int health;
    public:
    char level;
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    int sethealth(int health){
        this->health=health;
    }
    char setlevel(char level){
        this->level=level;
    }
    Hero(int health,int level){
        this->health=health;
        this->level=level;


    }
};
int main(){
    Hero shubh(70,'A');
    Hero saurabh(shubh);
    cout<<saurabh.gethealth()<<endl;
    cout<<saurabh.getlevel()<<endl;
    
    return 0;
}