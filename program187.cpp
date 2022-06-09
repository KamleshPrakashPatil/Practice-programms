#include<iostream>
using namespace std;

void  strcpy(char *src,char *dest)
{
    while(*src!='\0')
    {
        *dest=*src;

        src++;
        dest++;
    }
    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter String\n";
    cin.getline(Arr,20);

    strcpy(Arr,Brr);
    cout<<"String after copy: "<<Brr<<endl;

    return 0;
}