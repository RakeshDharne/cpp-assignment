#include <iostream>
using namespace std;
class complex
{
private:
     int real,imag;

public:
     complex()
     {
        real=0;
        imag=1;
     }
     complex(int b)
     {
        real=0;
        imag=b;
     }
     complex(int a,int b)
     {
        real=a;
        imag=b;
     }
     void display()
     {
        cout << real << "+" << imag << "i" << endl;
     }
};
int main ()
{
     cout << "RESULT IS: "<<  endl;
     complex c1;
     c1.display();
     complex c2(5);
     c2.display();
     complex c3(5,7);
     c3.display();
}
