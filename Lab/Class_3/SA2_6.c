#include <stdio.h>
int main()
{
int total_paisa, rupee, paisa;
printf("Enter total amount in paisa = ");
scanf("%d",&total_paisa);
rupee=total_paisa/100;
paisa=total_paisa%100;
printf("Equivalent amount in rupees & Paisa.\n");
printf("%d rupee ",rupee);
printf("& %d paisa\n",paisa);
return 0;
}
