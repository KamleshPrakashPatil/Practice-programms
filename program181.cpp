#include<iostream>
using namespace std;

int CountVowels(char str[])
{
    int iCount=0;
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
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

    iRet=CountVowels(Arr);
    cout<<"Occurance of vowels in String is: "<<iRet<<endl;

    return 0;
}