#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCount=0;
    while(*str!='\0')
    {
        iCount++;
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

    iRet=strlenX(Arr);
    cout<<"String Length is: "<<iRet<<endl;

    return 0;
}