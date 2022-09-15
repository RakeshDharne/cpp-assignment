  #include <iostream>
   using namespace std;
   class Complex
   {
    public:
          float p;
          float j;
    public:
        Complex()
        {
            p=1;
            j=1;
        }
        void print();      
   };
   void Complex::print()
   {
        cout<< p << "+" << j << "i" << endl;
   }
   int main()
   {
       Complex a;

       cout<< "Enter real and complex coefficient of the complex number:"<< endl;
        cin >> a.p;
        cin >> a.j;
        a.print();
   }


  
