#include<iostream>
#include<stdlib.h>
using namespace std;
class Length
{
    private:
       int feet,inches;
    public:
       Length()
       {
        feet=0;
        inches=0;
       }   
       void setdata(int x,int y)
       {
         feet =x;
         inches=y;
       }
       void display()
       {
        cout << "feet:"<< feet << "and Inches:" << inches << endl;
       }
       void operator--()
       {
        inches--;
       }
};
int main()
{
    Length d;
    d.setdata(55,20);
    cout<<"value of distance before:"<<endl;
    d.display();
    --d;
    cout<<"\n value of distance after :"<<endl;
    d.display();
}
        
