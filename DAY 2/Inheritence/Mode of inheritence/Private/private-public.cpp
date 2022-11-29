#include<iostream>
using namespace std;
class Human{
    private:
    int height;
    int weight;
    int age;

};
class Male : public Human{
    char colour;

    int gerAge(){
        return this->age;
    }

};
int main(){
    Male shubh;

    //yha dono hi command se output nhi aa skta  ki private kisi ko bhi access ki permission nhi deta hai





    cout<<shubh.age;

    cout<<shubh.gerAge();
    return 0;
}
