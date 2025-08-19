
#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<< "This is base\n";
    }
};

class Derived : public Base{
    public:
    void show() override {
        cout<< "Derived\n"; //overriding
    }
};
int main(){
    Base* b1 = new Derived();
    b1->show();
    delete b1;
}