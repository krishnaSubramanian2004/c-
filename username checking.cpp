#include <iostream>
#include <string>
using namespace std;

class check
{
    public:
       void checks(string a,string b)
        {
            if(a==b)
            {
                cout<<"Username is valid";
            }
            else
            {
                cout<<"Username is invalid";
            }
        }
    
};
int main() {
    check c;
    string a,b;
    cout<<"Enter the Username:";
    cin>>a;
    cout<<" Renter the Username:";
    cin>>b;
    c.checks(a,b);
}
