#include<iostream>
using namespace std;

void  strcatX(char *src,char *dest)
{
    while(*src!='\0')
    {
        src++;
    }
    while(*dest!='\0')
    {
        *src=*dest;

        src++;
        dest++;
    }
    *src='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter first String\n";
    cin.getline(Arr,20);

    cout<<"Enter second String\n";
    cin.getline(Brr,20);

    strcatX(Arr,Brr);
    
    cout<<"String after concatination: "<<Arr<<endl;

    return 0;
}