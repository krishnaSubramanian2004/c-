#include <iostream>
using namespace std;

class check
{
    public:
        void checks(int n)
        {
            int count=1,i;
            for(i=2;i<=n;i++)
            {
                (n%i==0)?count+=1:count+=0;
            }
            string a=(count==2)?" is prime number":" is not a prime number";
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
