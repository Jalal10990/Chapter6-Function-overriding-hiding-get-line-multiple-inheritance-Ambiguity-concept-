
#include<iostream>
using namespace std;

class A{
    public:
    void showA(){           
        cout<<"A jalal";
    }
    
};
class B{
    // public:  void showB(){
    //     cout<< "B jalal";
    // }
    //if mathod same like
     public:  void showA(){
        cout<< "B jalal";
    }

};
class C : public A, public B {};//multiple inheritance

int main(){
    C obj;
    // obj.showA();
    obj.A::showA();

    // obj.showB();
}