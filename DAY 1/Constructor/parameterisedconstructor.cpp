#include<iostream>
using namespace std;
class Hero{
    public:
    int health;

    //parameterised constructor--jis constructor me parameters rhte hain
    Hero(int health){
        cout<<"this address :"<<this<<endl;
        this->health = health;
        
    }
};
int main(){
    Hero shubh(7);
    cout<<"shubh address : "<<&shubh<<endl; 
    cout<<shubh.health;
    return 0;
}