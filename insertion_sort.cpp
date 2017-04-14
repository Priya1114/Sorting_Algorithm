#include<iostream>
using namespace std;
class a
{
    int arr[100];
    int i,j,n;
public:
    void create()
    {
        cout<<"enter the size";
    cin>>n;
    cout<<"enter the array";
    for(i=0;i<n;i++)
        cin>>arr[i];

    }
    void sort_()
    {
    for(i=0;i<n;i++)
    {j=i-1;
int    temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }


    }
    void show()
    {
        for(i=0;i<n;i++)
            cout<<arr[i];

    }


};
main()
{
    a ob;
    ob.create();
    ob.sort_();
    ob.show();
}
