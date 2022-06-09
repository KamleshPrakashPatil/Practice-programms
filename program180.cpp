#include<iostream>
using namespace std;

int CountSpace(char str[])
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==' ')
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

    iRet=CountSpace(Arr);
    cout<<"Occurance of Small letters in String is: "<<iRet<<endl;

    return 0;
}