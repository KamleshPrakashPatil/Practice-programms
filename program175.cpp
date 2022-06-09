#include<iostream>
using namespace std;

int CountL(char str[])
{
    int iCount=0;
    while(*str!='\0')
    {
        if((*str=='l')||(*str=='L'))
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

    iRet=CountL(Arr);
    cout<<"Occurance of l in String is: "<<iRet<<endl;

    return 0;
}