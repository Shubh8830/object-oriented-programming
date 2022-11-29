#include<iostream>
using namespace std;
class Human{
    protected:
    int height;
    int weight;
    int age=5;


};
class Male : public Human{
    public:
    char colour;

    public:
    int getAge(){
        return this->age;
    }


};
int main(){
    Male shubh;
// yha hum shubh,age se age ko access nhi kr skte kyu ki hum  yhan protected human class ko public me inherit kr rhe hain to result me hame hamesh protected =public is protected
    // cout<<shubh.age;
    cout<<shubh.getAge();
    return 0;
}