#include <iostream>
using namespace std;
class check{
    public:
        void checks(int n)
        {
            int sum=0,i=1;
            while(i<n)
            {
                if(n%i==0)
                {
                    sum+=i;
                }
                i++;
            }
            if(sum==n)
            {
                cout<<n<<" is a perfect number";
            }
            else
            {
                cout<<n<<" is not a perfect number";
            }
        }
};
int main() {
    check c;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    c.checks(n);
}
