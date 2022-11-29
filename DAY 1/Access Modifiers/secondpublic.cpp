#include<iostream>
using namespace std;
class Hero{
    //public class k andr aur class k bhar dono jgh access kr skte hain (age public nhi lagayenge to by defaut acceess modifier private hoga)
    public:
    int health;
    int level;
};
int main(){
    Hero shubh;
    cout<<"Size of Shubh : "<<sizeof(shubh);


}