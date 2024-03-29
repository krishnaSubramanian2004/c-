#include <iostream>
using namespace std;

class check
{
    public:
        void checks(int n)
        {
            string a=(n%2==0)?" is Even number":" is Odd number";
            cout<<n<<a;
        }
};
int main() {
   check c;
   int n;
   cout<<"enter the number:";
   cin>>n;
   c.checks(n);
}
