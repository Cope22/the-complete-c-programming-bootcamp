#include <stdio.h>
int main ()
{

int broj;

printf ("Unesite celi broj: ");
scanf ("%d", &broj);

if (broj < 0)
 printf ("Broj je negativan.");

else 
 if (broj > 0)
 printf ("Broj je pozitivan.");
else
printf ("Broj je jednak nuli.");

}
