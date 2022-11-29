#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age=4;

};
class Male : protected Human{
    public:
    char colour;


    public:
    int getAge(){
        return this->age;
    }    
    
};
int main(){
    Male shubh;

    //shubh.age se access nhi kr skte q ki male class me human protected hain//pr getter funtion se call kr skte hain

    // cout<<shubh.age<<endl;
    //getter funtion se age ko call kr lenge----

    cout<<shubh.getAge();
    return 0;
}