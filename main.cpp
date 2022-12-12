#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void sortuj(int *a, int *b, int *c)
{
        if(*a>*b)
                swap(a,b);
        if(*a>*c)
                swap(a,c);
        if(*b>*c)
                swap(b,c);
}

int main()
{
        int a, b, c;

        cout<<"Podaj trzy liczby: ";
        cin>>a>>b>>c;

        sortuj(&a,&b,&c); //sortowanie liczb

        cout<<"Liczby posortowane: "<<a<<" "<<b<<" "<<c<<endl;

        system("pause");
        return 0;
}
