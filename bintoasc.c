#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <windows.h>
int * *mat,*vet, i;

main()
{
printf("Conversione Da Binaro Ad A.S.C.I.I.\n\n");
printf("Numero righe messaggio: ");
int a,j,k,e,l;
int p=0;
scanf("%d",&a);
system("cls");
mat=(int * *)malloc(a*sizeof(int *));
vet=(int *)malloc(sizeof(int)*a);
int i;
for(i=0;i<a;i++)
*(mat+i)=(int *)malloc(8*sizeof(int));

for (j=0; j<a; j++)
{
int somma=0;
int posto=128;
printf("%d^ codice binario\n\n",j+1);
for (k=0; k<8; k++)
{
printf("(%d,%d)= ",j+1,k+1);
scanf("%d",&e);
mat[j][k]=e;
somma=somma+(posto*e);
posto=posto/2;
}
vet[p]=somma;
p++;
system("cls");
}
printf("INPUT\n");
printf("Matrice In Binario\n\n");
for (j=0; j<a; j++)
{
for (k=0; k<8; k++)
printf("%d ",mat[j][k]);
printf("\n");
}
printf("\n\n");
printf("OUTPUT\n");
printf("Vettore in A.S.C.I.I.\n\n");
for (l=0; l<a; l++)
printf("%c",vet[l]);
getch();
}
