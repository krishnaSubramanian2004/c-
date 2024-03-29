#include <iostream>
using namespace std;
class finds{
    public:
        void sums(int arr[], int n)
        {
            int i=0,sum=0;
            do
            {
                sum+=arr[i];
                i++;
            }
            while(i<n);
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
