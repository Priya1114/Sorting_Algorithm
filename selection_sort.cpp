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
        cout<<"enter the elements";
        for(i=0;i<n;i++)
            cin>>arr[i];

    }
    void sort_()
    {
        for(i=0;i<n-1;i++)
        {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }

        }
        if(i!=min)
        {
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;

        }

        }
    }
    void show()
    {
        for(i=0;i<n;i++)
            cout<<arr[i]<<endl;
    }

};
main()
{
    a ob;
ob.create();
ob.sort_();
ob.show();
}
