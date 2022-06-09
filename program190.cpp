#include<iostream>
using namespace std;

bool  strcmpX(char *src,char *dest)
{
    while((*src!='\0')&&(*dest!='\0'))
    {
        if((*src!=*dest))
        {
            break;
        }
        src++;
        dest++;
    }

    if(*src=='\0'&&*dest=='\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet=false;

    cout<<"Enter first String\n";
    cin.getline(Arr,20);

    cout<<"Enter second String\n";
    cin.getline(Brr,20);

    bRet=strcmpX(Arr,Brr);
    
    if(bRet==true)
    {
        cout<<"Strings are equal\n";
    }
    else
    {
        cout<<"Strings are not equal\n";
    }

    return 0;
}