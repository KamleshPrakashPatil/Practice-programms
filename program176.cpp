#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCount=0;
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    int iRet=0;
    char Arr[20];

    cout<<"Enter String\n";
    cin.getline(Arr,20);

    iRet=CountCapital(Arr);
    cout<<"Occurance of Capital letters in String is: "<<iRet<<endl;

    return 0;
}