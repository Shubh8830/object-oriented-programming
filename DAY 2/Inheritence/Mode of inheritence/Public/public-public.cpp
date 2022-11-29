#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

   
};
 class Male : public Human{
        public:
        string colour="Brown";

    };
int main(){
    Male ram;
    cout<<ram.colour;
    return 0;
}