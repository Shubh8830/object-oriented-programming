#include<iostream>
using namespace std;
class Hero{
    //default me ye private rhte hain inko public krna pdega tb hi access kr payenge


    //public krne k liye (public:) ka use krenge
    //public dekhne k liye public.cpp same program run krenge



    
    int health = 4;
    char level = 'A';
};
int main(){
    //creation of object
    Hero shubh;
    cout<<"Size of shubh -:"<<sizeof(shubh)<<endl<<endl;

    //access modifiers

    //ab hame shubh ki health ko access krna hai to kese krenge-:(dot opertior se ("."))


    cout<<"Shubh ki health : "<<shubh.health<<endl;
    cout<<"Shubh ka level : "<<shubh.level<<endl;
    return 0;
}