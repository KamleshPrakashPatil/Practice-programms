#include<iostream>
using namespace std;

void  strRevX(char *str) //case insensitive
{
    char *start=str;
    char *end=str;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        char temp= *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String\n";
    cin.getline(Arr,20);

    strRevX(Arr);
    cout<<"String after swapping: "<<Arr<<endl;

    return 0;
}