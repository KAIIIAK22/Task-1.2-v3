#include <iostream>
using namespace std;

int main()
{
   unsigned  int a ;
   cout<<"Vasha zarplata($): ";
   cin >>a;
   if (a>1000)
    {
      if (a>1000000)
        {
          cout <<"Ti millioner!";
          goto mark;
        }
      cout <<"Horosho";
      goto mark;
    }
    cout <<"Rabotai bolshe";
    mark:;
    cout <<"...no ti molodec";
    return 0;
}
