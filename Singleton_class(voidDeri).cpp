#include<iostream>
using namespace std;

class singleton
{
    static singleton* obj1;

    singleton()
    {
        cout << "Constructor : Singleton obj1 created" << endl;
    }

    ~singleton()
    {
        cout << "Destructor : singleton boj1 destroyed" << endl;
    }

    //Deleting copy constructor and assingnment operator to avoid duplication of objects
    singleton(singleton&) = delete;
    singleton& operator = (singleton&) = delete;

    public :
    static singleton* getobj()
    {
        if(obj1 == nullptr)
        {
            obj1 = new singleton(); 
        }
        return obj1;
    }

    void display()
    {
        cout << "Singleton object created" << endl;
    }
};

singleton* singleton::obj1  = nullptr;

int main(void)
{
    // singleton objoutside;
    // objoutside.display();    //Error, private constructor
   singleton* s1 = singleton::getobj();
    s1->display();

    singleton *s2 = singleton::getobj();
    s2->display();
    

    if(s1==s2)
    {
        cout << "Both objects are same...." << endl;
    }
     //deleting using destructor
    // delete singleton::getobj();

     return 0;
}