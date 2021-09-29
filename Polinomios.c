#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int constante;
	int potencia;
}Termino;

int Menu(){
	int Opcion;
	printf("\t------ Polinomios ---------\n\n");
	printf("\n\t\t MENÚ PRINCIPAL \t\t\n");
	printf("1.	Introducir el polinomio \n");
	printf("2.	Derivar el polinomio \n");
	printf("3.	Salir \n\n");
	do{
		printf("Opcion: ");
		scanf("%d",&Opcion);
	}while(Opcion<1 || Opcion >3);
	
	return Opcion;
}

Termino derivar(Termino variable){
	int aux;
	aux= variable.constante * variable.potencia; 
	variable.constante= aux;
	variable.potencia= variable.potencia-1;
	return variable;
}

void ImprimePolinomio(Termino poli[100],int grado){
	int k;
	for(k=0;k<=grado;k++){
		if(poli[k].potencia > 1){
			if(poli[k].constante>0){
				if(poli[k].constante==1){
					printf("+ x^%i ", poli[k].potencia);
				}
				else{
					printf("+%d x^%i ",poli[k].constante, poli[k].potencia);
				}
			}
			else if(poli[k].constante<0){
				if(poli[k].constante==-1){
					printf("- x^%i ", poli[k].potencia);
				}
				else{
					printf(" %d x^%i ",poli[k].constante, poli[k].potencia);
				}
				
			}
			else{
			}
		}
		else if(poli[k].potencia==1){
			if(poli[k].constante>0){
				if(poli[k].constante==1){
					printf("+ x ");
				}
				else{
					printf("+%d x ",poli[k].constante);
				}
			}
			else if(poli[k].constante<0){
				if(poli[k].constante==-1){
					printf("- x ");
				}
				else{
					printf(" %d x ",poli[k].constante);
				}
				
			}
			else{
			}
		}
		else{
			if(poli[k].constante>0){
					printf("+%d ",poli[k].constante);
			}
			else if(poli[k].constante<0){
					printf(" %d x ",poli[k].constante);
			}
			else{
			}
		}
	}
	printf("\n");
}


int main(){
	Termino polinomio[100];
	int Opcion, grad, i, j;
	int auxi;
	do{
		system("cls");
		Opcion=Menu();
		switch(Opcion){
			case 1: 
				do{
					printf("Introduzca el grado del polinomio a derivar\n");
					scanf("%i",&grad);
				}while(grad > 100 || grad < 1);
				for(i=0 ; i <= grad ; i++){
					printf("Introduzca la constante de x^ %i\n", i);
					scanf("%i",&auxi);
					polinomio[i].constante=auxi;
					polinomio[i].potencia=i;
				}
				printf("El polinomio introducido es: \n");
				ImprimePolinomio(polinomio,grad);
				system("pause");
				break;
			case 2:
				for(j=0; j<grad;j++){
					polinomio[j]= derivar(polinomio[j+1]);
				}
				grad= grad-1;
				printf("El polinomio derivado resultante es: \n");
				ImprimePolinomio(polinomio,grad);
				system("pause");
				break;
			case 3:
				printf("Gracias, Hasta luego\n");
				break;			
		}
	}while(Opcion != 3);
		
}
