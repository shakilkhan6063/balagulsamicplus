#include<iostream>
using namespace std;

class myclass{
private:
    int a;
public:
    myclass(int x);///inline function
    int get_a();/// automatic inline fn



};
myclass::myclass(int x){

a=x;

}
int myclass::get_a(){

return a;

}




int main(){
    myclass ob(10);
    cout<<"value "<<ob.get_a<<endl;




}

