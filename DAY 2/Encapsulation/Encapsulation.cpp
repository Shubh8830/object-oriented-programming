#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height=3;

    public:
    int getheight(){
        return this->height;
    }
};
int main(){
    Student Shubh;
    cout<<Shubh.getheight();
    return 0;
}