#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
};
class Male : private Human{
    public:
    char colour;
    
    public:
    int getAge(){
        return this->age;
    }
    
    
    };
int main(){

    Male ram;

    //yha mai access nhi kr skta q ki private class hain (Human) Male mai---
    cout<<ram.getAge();
    return 0;
}  