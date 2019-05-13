#include <iostream.h>
#include <conio.h>

main (){
   int j;
   int f;
   for (j=1; j<=4; j++)
      {
         for(f=1; f<=4; f++)
            {
               if(j==f){
                  cout<<j<<" ";
               }
               else{
                  cout<<'M'<<" ";
               }
            }
   cout<<" \n";
   cout<<"\n";
   }
getch ();
}
