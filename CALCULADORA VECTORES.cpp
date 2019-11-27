///CRUZ TAPIA EDUARDO 1AV6
///CALCULADORA DE VECTORES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>

void printVector(int myVector[], int size);
void sumaVector(int vector1[3],int vector2[3],int *ptr);
void restaVector(int vector1[3],int vector2[3],int *ptr);
void PpuntoVector(int vector1[3],int vector2[3],int *ptr);
void PescalarVector(int vector1[3],int vector2[3],int *ptr);
void normaVector(int vector1[3],int vector2[3],int *ptr);
void unitarioVector(int vector1[3],int vector2[3],int *ptr);
int main(){

int a[3] = {1,2,3};
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
int *ptrC = &c[0];
int opt,z;
char rep;
do{
printf("1.- SUMA\n2.- RESTA\n3.- PRODUCTO PUNTO\n4.- PRODUCTO ESCALAR\n5.- NORMA\n6.- VECTOR UNITARIO\nINTRODUZCA UNA OPCION:_");
scanf("%d",&opt);
switch(opt){
    case 1:
        sumaVector(a,b,ptrC);
        printVector(c,3);
    break;
    case 2:
        restaVector(a,b,ptrC);
        printVector(c,3);
    break;
    case 3:
        PpuntoVector(a,b,ptrC);
        printVector(c,1);
    break;
    case 4:
        PescalarVector(a,b,ptrC);
        printVector(c,1);
    break;
    case 5:
        normaVector(a,b,ptrC);
        printVector(c,2);
    break;
    case 6:
        unitarioVector(a,b,ptrC);
        printVector(c,3);
    break;
    default:
        printf("OPCION INVALIDA\nINTRODUZCA UNA OPCION:_");
}
printf("DESEA REALIZAR OTRA OPERACION? S N \n");
rep = getch();
}while((rep=='S') || (rep=='s'));
}

void printVector(int myVector[],int size){
for (int i=0; i<size; i++){

	printf("vector[%d]: %d\n ",i,myVector[i]);

	}
}

void sumaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] + vector2[i];
	}
}
void restaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] - vector2[i];
	}
}
void PpuntoVector(int vector1[3],int vector2[3],int *ptr){
    for(int i = 0; i<3; i++){
        *ptr = (vector1[0]*vector2[0])+(vector1[1]*vector2[1])+(vector1[2]*vector2[2]);

    }
}
void PescalarVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] + vector2[i];
	}
}
void normaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = sqrt(vector1[i]^2);
		*(ptr+i) = sqrt(vector2[i]^2);
	}
}
void unitarioVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] / sqrt(vector1[i]^2);
		*(ptr+i) = vector2[i] / sqrt(vector2[i]^2);
	}
}
