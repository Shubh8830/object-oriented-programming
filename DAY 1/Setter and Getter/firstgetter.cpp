#include<iostream>
using namespace std;
class Hero{
    private:
    int health=3;


    public:
    int level = 'A';

    //geter aur setter kuch funtions hote hai jo hame private ya public member k elements ko read krne aur set krne k kaam aate hain ...yha hum getter ko dekhenge

    //bas ek function banta h class k andr jisme funtion value ko return kra dete hain



    int gethealth(){
        return health;
    }


    char getlevel(){
        return level;
    }

};
int main(){

Hero shubh;
cout<<"Shubh ki Health : "<<shubh.gethealth()<<endl<<endl;

cout<<"Shubh ka level : "<<shubh.getlevel()<<endl<<endl;


    return 0;

}