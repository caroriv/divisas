/*
	-Pedir al usuario el valor que desea realizar el c�lculo de factorial.
	-Cambiar el tipo de dato para poder hacer c�lculo m�s grande.
	-Validar la entrada del usuario (que sea un entero positivo), en caso de no cumplir este requerimiento se 
	debe pedir un valor v�lido.
	-Una vez terminado el c�lculo, preguntar al usuario si desea calcular otro valor o si desea salir del programa.
	
*/

#include <stdio.h>

double factorial(double x);

int main(){
	
	double numero, calculo;
	int condicion;
	
	do{
	
		//Ingresamos el n�mero, para obtener el factorial.
		
		printf("\n\nIngrese un numero: ");
		scanf("%lf", &numero);
		
		
		//Si el n�mero es mayor a 0, se har� el c�lculo del factorial. 
		if(numero > 0){
		
			
			calculo = factorial (numero);
			
			printf("El factorial del numero %.0lf es de: %.0lf ", numero, calculo);
			
			
		}
		
		//En caso de que sea negativo, va a mostrar el siguiente mensaje, 
		//hasta que el usuario ingrese un n�mero positivo.
		else{
			
			do{
					
				printf("\nOpcion invalida, intente de nuevo\n");
				
				printf("\nIngrese un numero positivo: ");
				scanf("%lf", &numero);
			
				
			}while(numero < 0);	
			
			calculo = factorial (numero);
			
			printf("\nEl factorial del numero %.0lf es de: %.0lf ", numero, calculo);
						
		}
		
			//Si ingresamos el n�mero 1 se volver� a pedir un n�mero y podremos calcular otro factorial.
			//Al menos que el usuario desee ingresar el n�mero 0, para salir.
			
			printf("\nDesea realizar otro calculo [Si=1][No=0]: ");
			scanf("%d", &condicion);
		
	}while(condicion != 0); 
		
	//Y cuando termine el programa se va a mostrar este mensaje.
		
	printf("\n Hasta luego \n");
	
	return 0;
}

double factorial(double x){
	
	if(x == 0 || x == 1){
		
		return 1;
	}
	
	else{
		
		return x * factorial (x - 1);
	}
	
}
