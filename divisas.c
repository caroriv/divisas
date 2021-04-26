/*
	Crear c?digo fuente (divisas.c), el programa debe pedir una cantidad al usuario 
	y convertirla a alguna de las divisas disponibles (euro, dolar estadounidense o libra).
	
*/

#include <stdio.h>
#include <stdlib.h>
/*
-----------------------------
LAS MACROS LA UTILIZAMOS PARA
DEFINIR UN VALOR CONSTANTE
PARA QUE NO LO ALTEREMOS.
-----------------------------
*/
#define pesos1 23.99
#define pesos2 19.82
#define pesos3 27.55


int main(){
	
	//VARIABLES LOCALES.
	
	float euros = 0.0, conversion = 0.0, dolares = 0.0, libras = 0.0;
	int divisas;
	char tecla;
	
	do{
		
		/*
		---------------------------------------
		REALIZAMOS NUESTRO MEN? DE 4 OPCIONES
		DEL CONVERSOR DE MONEDAS
		--------------------------------------
		*/
		printf("\n\n\t\t--------------------------------------------------\n");
		printf("\t\t\t\tCalculadora de divisas");
		printf("\n\t\t--------------------------------------------------\n");	
		printf("\n\n1.Euros a pesos\n2.Dolar estadounidense a pesos\n3.Libras a pesos\n4.Salir");
		printf("\nEliga una opcion, por favor: ");
		scanf("%d", &divisas);
		
		switch(divisas){
			
			case 1:
				
				printf("\n\n\tEuros a pesos");
				
				printf("\nIngrese el total de euros: ");
				scanf("%f", &euros);
				
				conversion = euros * pesos1;
				
				printf("\nLa conversion de euros a pesos es de: \n\n %.2f euros = %.2f pesos", euros, conversion);
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
				
					
				break;
				
			case 2:
				
				printf("\n\n\tDolares estadounidenses a pesos");
				
				printf("\nIngrese el total de dolares: ");
				scanf("%f", &dolares);
				
				conversion = dolares * pesos2;
				
				printf("La conversion de euros a pesos es de: \n\n %.2f euros = %.2f pesos", dolares, conversion);
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
				
				break;
				
			case 3:
			
				printf("\n\n\tLibras a pesos");
				
				printf("\nIngrese el total de libras: ");
				scanf("%f", &libras);
				
				conversion = libras * pesos3;
				
				printf("La conversion de libras a pesos es de: \n\n %.2f euros = %.2f pesos", libras, conversion);
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					system("cls"); //system("clear");
					
				}
			
				break;
				
			case 4:
				
				printf("\nAdios:)");
				
				break;
				
			default:
			
				printf("\nIngrese una opcion del 1 al 3 o si desea salir eliga la opcion 4\n");
				
				printf("\nPresione la tecla s o S, por favor: ");
				scanf("%s", &tecla);
				
				if(tecla == 's' || tecla == 'S'){
					
					/*
					-------------------
					SYSTEM CLS SIRVE,
					PARA LIMPIAR LA PANTALLA
					Y NO SE VE AMONTONADO
					-------------------
					*/
					system("cls"); //system("clear"); 
					
				}
				
				break;		
			
			
		}
		
	}while(divisas != 4); //HASTA QUE NOSOTROS DIGITEMOS EL N?MERO 4 SE SALDR? DEL SISTEMA.
	
	
	
	return 0;
}

