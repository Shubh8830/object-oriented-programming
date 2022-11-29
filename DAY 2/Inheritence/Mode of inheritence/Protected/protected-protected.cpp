#include<iostream>
using namespace std;
class Human{
    protected:
    int height;
    int weight;
    int age;
};
class Male : protected Human{
    public:
    char colour;

    public:
    int getHeight(){
        return this->height;
    }
    int getAge(){
        return this->age;
    }

};
int main(){
    Male shubh;
    //yha hum shubh.age ko access nhi kr skte kyu ki Human protected class inherit kr tha hai public class me to protected plus protected ==protected hi hote h
    cout<<shubh.age<<endl;
    //getter ka use kr k age ko print kra skte hain
    cout<<shubh.getAge();
    return 0;
}