#include <stdio.h>
#include <conio.h>

using namespace std;

int main () {
char n[40];
int ht,ch,he;
float st,imp,st1,st2,het1,het,hex,st1a,st3;
printf("TECLEA TU NOMBRE\t");
scanf("%s",&n);
printf("TECLEA CUANTAS HORAS TRABAJASTE: ");
scanf("%i",&ht);
printf("TECLEA EL PAGO POR HORA: ");
scanf("%i",&ch);
he=ht-40;
hex=he*ch;
het=ch*he*1.5-100;
het1=het+hex;
st=ch*ht;
st1a=(ht-he)*ch;
imp=(st*4.83)/100;
st1=st-imp;
st2=st1a+het1;
st3=st1a+het1;
printf("\n\n EN: %i HORAS TRABAJADAS\n PAGADAS A: Q%i\n� CON %i DE HORAS EXTRAS\n PAGO DE HORAS EXTRAS: Q%.2f\n MENOS $%.2f DE IGSS\n TU SALARIO SERA DE: Q%.2f ",ht,ch,he,het1,st3);
printf("\total de descueto del IGSS:   ",imp)
getch();
}
