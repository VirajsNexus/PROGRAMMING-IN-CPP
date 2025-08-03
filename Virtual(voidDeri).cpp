#include<iostream>
using namespace std;

class base
{
    public:
    void fun1()
    {
        cout << "In base fun 1.";
    }
    virtual void fun2()
    {
        cout << "In base fun 2.";
    }
    virtual void fun2(int no)
    {
        cout << "In base fun 2, with parameter.";
    }
    void fun3()
    {
        cout << "In base fun 3.";
    }
    virtual void fun4()
    {
        cout << "In base fun 4.";
    }
    void fun5()
    {
        cout << "In base fun 5.";
    }
    virtual void fun6()
    {
        cout << "In base fun 6.";
    }
    virtual void fun7()
    {
        cout << "In base fun 7.";
    }
};

class derived : public base
{
    public:
    void fun2()
    {
        cout << "In derived fun2." <<endl;
    }
    void fun3()
    {
        cout << "In derived fun3." <<endl;
    }
    void fun4()
    {
        cout << "In derived fun4." <<endl;
    }
    virtual void fun5()
    {
        cout << "In derived fun5." <<endl;
    }
    virtual void fun7()
    {
        cout << "In derived fun7." <<endl;
    }
    virtual void fun8()
    {
        cout << "In derived fun8." <<endl;
    }
    virtual void fun9()
    {
        cout << "In derived fun9." << endl;
    }
};

int main (void)
{
    derived dobj;
    base bobj;
    base * bp = nullptr;
    derived * dp = nullptr;

    bp = &bobj ;     // no upcasting

     bp -> fun1();
     bp -> fun2();
     bp -> fun2(10);
     bp -> fun3();
     bp -> fun4();
     bp -> fun5();
     bp -> fun6();
     bp -> fun7();
    //  bp -> fun8();         // Error, Not in base.
    // bp -> fun9();          // Error, Not in base


    dp = &dobj;             // Upcasting

    dp->fun1();
    dp->fun2();
    // dp->fun2(20);        //Error, Function Hiding
    dp->fun3();
    dp->fun4();
    dp->fun5();
    dp->fun6();
    dp->fun7();
    dp->fun8();
    dp->fun9();
    
    
    base& bref = dobj;        // Upcasting through reference
    
    bref.fun1();
    bref.fun2();
    bref.fun2(30);
    bref.fun4();
    bref.fun5();
    bref.fun6();
    bref.fun7();
    // bref.fun8();          // Error, Not in base
    // bref.fun9();          // Error, Not in base

    return 0;

}