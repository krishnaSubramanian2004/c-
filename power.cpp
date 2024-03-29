#include <iostream>
#include <cmath>
using namespace std;
class finds{
  public:
    void finding(int n, int p)
    {
        cout<<"Value:"<<pow(n,p);
    }
};
int main() 
{
   int n,p;
   finds f;
   cout<<"Enter the number:";
   cin>>n;
   cout<<"Enter the power:";
   cin>>p;
   f.finding(n,p);
}
