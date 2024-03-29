#include <iostream>
#include <string>
using namespace std;

class check
{
    public:
       void checks(int a)
        {
            if(a>=18)
            {
                cout<<"You are eligible to vote";
            }
            else if(a<18 && a>=0)
            {
                cout<<"You are eligible to vote after "<<18-a<<" years";
            }
            else
            {
                cout<<"please enter the valid age";
            }
        }
    
};
int main() {
    check c;
    int a;
    cout<<"Enter the age:";
    cin>>a;
    c.checks(a);
}
