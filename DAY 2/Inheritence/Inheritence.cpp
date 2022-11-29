#include<iostream>
using namespace std;
class Human{
    public:
    int height=1;
    int weight;
    int age=3;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

//yha hum inherit kr rhe hain;
class Male : public Human{
    public:
    string colour;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    } 

};
int main(){
    Male Ram;
    cout<<Ram.age<<endl;
    cout<<Ram.colour<<endl;
    cout<<Ram.getAge()<<endl;
    cout<<"weight before : "<<Ram.weight<<endl;
    cout<<endl;
    Ram.setWeight(50);
    cout<<"Weight After : "<<Ram.weight<<endl;
    Ram.sleep();
    return 0;
}