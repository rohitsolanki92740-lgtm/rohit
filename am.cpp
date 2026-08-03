#include <iostream.h>
#include <conio.h>

void display(int a);
void display(long a);

void main()
{
    clrscr();
    
    int x = 10;
    
    // In Turbo C++, a standard int can sometimes promote 
    // to long, or match int directly. 
    // Let's force an ambiguity using a short or regular int 
    // with overloaded functions that have equal conversion weight:
    
    display(x); 

    getch();
}

void display(int a)
{
    cout << "Int version";
}

void display(long a)
{
    cout << "Long version";
}