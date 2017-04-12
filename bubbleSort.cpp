#include<iostream>
using namespace std;
class a
{
    int * arr;
    int i,j,n;
public:
    a()
    {
    arr=new int[100];
    }
    void create()
    {
        cout<<"enter the size";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    }
    void sort_()
    {

        for(i=0;i<n-1;i++)
        {

            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
    }
    void show()
    {
        for(i=0;i<n;i++)
        {

            cout<<arr[i]<<endl;
        }
    }

};
main()
{
    a ob;
    ob.create();
    cout<<"Before Sorting";
    ob.show();
   ob.sort_();
    cout<<"After Sorting";
    ob.show();

}
