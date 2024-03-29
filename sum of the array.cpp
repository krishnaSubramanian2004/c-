#include <iostream>
using namespace std;
class finds{
    public:
        void sums(int arr[], int n)
        {
            int i,sum=0;
            for(i=0;i<n;i++)
            {
                sum+=arr[i];
            }
            cout<<"sum:"<<sum;
        }
           
};


int main() 
{
    int n,i;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    finds f;
    f.sums(arr,n);
}
