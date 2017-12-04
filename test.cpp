#include <iostream>

using namespace std;

class XXX
    {
    public:
    void fun1()
    {
    cout << "hi\n";
    }
    private:
    void fun2()
    {
    cout << "won't be printed";
    }
    protected:
    void fun3()
    {
    cout << "won't be printed";
    }
    };

    int main()
    {
    XXX obj;
    obj.fun1();

    //obj.fun2();//error: ‘void XXX::fun2()’ is private

       //obj.fun3();//error: ‘void XXX::fun3()’ is protected

 return 0;
}
