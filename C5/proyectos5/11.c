#include <stdio.h>

int main(){
int num;
int num1, num2;
char *fd,*sd;
printf("Introduce un numero de dos digitos: ");

scanf("%d", &num);

num1 = num / 10;
num2 = num % 10;
 if (num <= 19){
		switch (num){
		case 10 : fd = "diez"; break;
		case 11 : fd = "once"; break;
		case 12 : fd = "doce"; break;
		case 13 : fd = "trece"; break;
		case 14 : fd = "catorce"; break;
		case 15 : fd = "quince"; break;
		case 16 : fd = "dieciseis"; break;
		case 17 : fd = "diecisiete"; break;
		case 18 : fd = "dieciocho"; break;
		case 19 : fd = "diecinueve"; break;
		default : fd = "numero de un digito"; break;
}
	}else{
switch (num1){
case 2 : fd = "veinti"; break; 
case 3 : fd = "treinta"; break; 
case 4 : fd = "cuartenta"; break; 
case 5 : fd = "cincuenta"; break; 
case 6 : fd = "sesenta"; break; 
case 7 : fd = "setenta"; break; 
case 8 : fd = "ochenta"; break; 
case 9 : fd = "noventa"; break; 
}
switch (num2){

case 0 : sd = ""; break; 
case 1 : sd = "uno"; break; 
case 2 : sd = "dos"; break; 
case 3 : sd = "tres"; break; 
case 4 : sd = "cuatro"; break; 
case 5 : sd = "cinco"; break; 
case 6 : sd = "seis"; break; 
case 7 : sd = "siete"; break; 
case 8 : sd = "ocho"; break; 
case 9 : sd = "nueve"; break; 

}
	}

	printf("Introduciste el numero: \"%s\"-\"%s\"\n", fd, sd);
	return 0;
}

	

