#include<iostream>
using namespace std;
class Hero{
public:                                                      //public me construction call krna pdega
                                                             //agr hun constructor khud (se call nhi krte hain to default consturctor phle se hi rhta vha jo custom constructor call krne k baad khatam ho jata hai..(shubh.Hero())

Hero(){
    cout<<"constructor called "<<endl;
}


};

int main(){
    cout<<"Hi"<<endl;

    //statically
    Hero shubh;
    cout<<"Hello"<<endl;

    //dynamically
    Hero *h = new Hero;
    return 0;
}