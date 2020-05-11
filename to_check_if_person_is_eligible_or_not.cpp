#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    string ill;
    cout<<"enter the age:");
    cin>>i;
    cout<<"are you an illiterate person ?:"<<"\n"<<"answer are in yes or no");
    getline(cin,ill);
    if(i>=18)
    {
        if(ill==yes)
        {
            cout<<"you are eligible person:");
        }
        else
        {
            cout<<" since you are illiterate,you are not allowed take vote.";
        }
    }
    else
        cout<<"since you are less than 18 ,you are not an eligible person";

    getch();
}
