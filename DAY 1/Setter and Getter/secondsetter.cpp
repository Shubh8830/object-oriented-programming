#include<iostream>
using namespace std;
class Hero{
    private:
    int health;


    public:
    char level;
    
    
    
    
    //getter for health and level
    
    int gethealth(){

        return health; 
    }
    char getlevel(){
        return level;
    }


    //setter ek funtion k jo data members ki value set krne k liye use krte hain

    int sethealth(int h1){
        health=h1;
    }

    char setlevel(char c1){
        level = c1;
    }
};
int main(){
    Hero shubh;
    shubh.sethealth(70);
    shubh.setlevel('A');

    cout<<"Shubh ki Health : "<<shubh.gethealth()<<endl;
    cout<<"Shubh ka level : "<<shubh.getlevel()<<endl;

    return 0;
}