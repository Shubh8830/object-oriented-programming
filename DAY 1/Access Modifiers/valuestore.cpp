#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;


};
int main(){
    Hero shubh;
    shubh.health = 70;
    shubh.level = 'A';

    cout<<"Heath of shubh : "<<shubh.health<<endl;
    cout<<"Level of shubh : "<<shubh.level<<endl;



    return 0;
}