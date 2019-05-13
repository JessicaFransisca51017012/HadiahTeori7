#include <iostream.h>
#include <conio.h>

main (){
   int j,f,m=10;
   for (j=1; j<=5; j++)
      {
         for(f=1; f<=j; f++)
            {
            cout<<m<<" ";
            m--;
            }
   cout<<" \n";
   cout<<"\n";
   }
getch ();
}