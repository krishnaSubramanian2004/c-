#include <iostream>
#include <cmath>
using namespace std;

class Find{
public:
    void finds(int n) {
        double a;
        if(n>0)
        {
            a=cbrt(n);
            cout<<"cube root of "<<n<<" is "<<a;
        }
        else
        {
            cout<<"please enter the number above 0 ";
        }
    }
};

int main() {
    Find f;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    f.finds(n);
    return 0;
}
