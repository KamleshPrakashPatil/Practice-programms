#include<iostream>
using namespace std;

void  strlwrX(char str[]) //case insensitive
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
           *str = *str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String\n";
    cin.getline(Arr,20);

    strlwrX(Arr);
    cout<<"String in lower case: "<<Arr<<endl;

    return 0;
}