#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int tan;
	printf("\n\t Cuantos datos quieres capturar : ");
	scanf("%d",&tan);
	int numeros[tan];
	int indice =0;
	int k=0,bandera=1,auxiliar,j;
	printf("Posicion \tvalor \n");
	for(indice=1;indice<=tan;indice ++)
	{
		printf("%d   \t\t", indice," \t ");
		scanf("%d",&numeros[indice]);
	}
	//ordenar de menor a mayor 
	for(indice =1;indice <=tan-1;indice++)
	{
		for ( j=indice+1; j<=tan;j++)
		{
			if(numeros[indice]>numeros[j])
			{
				auxiliar =numeros[j];
				numeros[j]= numeros[indice];
				numeros[indice]= auxiliar;
				
			}
		}
	}
	printf("\n ASCENDENTE \n");
	for(indice=1;indice<=tan;indice ++)
	{
	printf("\n\t%d",numeros[indice]);
	}
	printf("\n DESCENDENTE \n");
	for(indice=tan;indice>=1;indice --)
	{
	printf("\n\t%d",numeros[indice]);
	}
}

