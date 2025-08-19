
#include<iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<< "this is base\n"; //not virtual
    }
};
class Derived : public Base{
public:
     void show(int x){
        cout<< "Derived with x = "<< x<<"\n"; //hides base::show()

     }
};

int main(){
    Derived d;
    d.show(10); //calls Derived::show(int)
    //d.show();
    //error: Base::show()is hidden(not visisble)
}