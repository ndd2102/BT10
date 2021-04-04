#include <iostream>
#include <cstring>
using namespace std;
struct String
{
    int n;
    char *str;
    String(const char* s)
    {
        int i=0;
        while(s[i] != '\0')
            i++;
        strcpy(str,s);
        str[i]='\0';
        n=i;
    }
    ~String()
    {
        delete [] str;
    }
    void print()
    {
        cout << (str);
    }
    void append(const char* s)
    {
        char *temp;
        strcpy(temp,str);
        strncat(temp,s,5);
        str = temp;
    }
};

int main()
{
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();
}
