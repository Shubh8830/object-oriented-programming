#include<iostream>
using namespace std;
class Human{
    protected:
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
    // cout<<ram.age<<endl;

    cout<<ram.getAge();
    return 0;
}