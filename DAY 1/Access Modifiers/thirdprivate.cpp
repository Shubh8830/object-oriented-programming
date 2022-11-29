#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    char level;
};
int main(){
    Hero shubh;
    cout<<"Size of shubh : "<<sizeof(shubh);

    cout<<shubh.health;
    cout<<shubh.level;

    return 0;
}