#include<iostream>
#include<string>
using namespace std;
string insert_sort(string &a)
{
    cout<<"Please enter a number: ";
    getline(cin,a);
    auto n=a.size();
    for(int j=1;j<n;j++)
    {
        int key=0;
        key=a[j];
        auto i=j-1;
        while((i>=0)&&(a[i]>key))
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
    return a;
}

int main()
{
    string a;
    insert_sort(a);
    cout<<a<<endl;
    return 0;
}
