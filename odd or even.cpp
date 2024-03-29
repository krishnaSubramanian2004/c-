#include <iostream>
using namespace std;

class check
{
    public:
        void checks(int n)
        {
            if(n%2==0)
            {
                cout<<n<<" is a even number";
            }
            else if(n%2==1)
            {
                cout<<n<<" is a odd number";
            }
            else
            {
                cout<<"please renter the correct value";
            }
        }
};
int main() {
   check c;
   int n;
   cout<<"enter the number:";
   cin>>n;
   c.checks(n);
}
