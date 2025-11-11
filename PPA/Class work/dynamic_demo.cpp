#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;

    cout<<"enter the no. of elements:\n";
    cin>>length;
    //step1: Alloacte the memory
    Arr=new int[length];

    if(Arr==NULL)
    {
        cout<<"unable to allocate memory\n";

    }
    else
    {
        cout<<"memory gets successfully allocated\n";
    }

    //step2: Use the memory

    //step3: Deallocate the memory

    delete []Arr; //delete Arr also used but using that only 1st element will be free
    
    return 0;
}