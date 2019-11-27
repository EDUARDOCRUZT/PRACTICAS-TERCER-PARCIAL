///CRUZ TAPIA EDUARDO 1AV6
///CALCULADORA DE MATRICES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>

void scanfVector(int *ptr, int size);
void printMatrix(int *ptr,int size1, int size2);
void printMatrix(int arr[3][3]);
void sumaMatrix(int *prtC, int *ptrb, int *ptra, int d);
void restaMatrix(int *prtC, int *ptrb, int *ptra, int d);
void multiplicacionMatrix(int *ptr, int *ptrb, int *ptr2, int &x);

int main(){
int opt, o = 3;
float n,e;
char rep;
int a[3][3] = {{1,3,4},{1,3,6},{1,2,3}};
int b[3][3] = {{1,3,4},{1,3,6},{1,2,3}};
int c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int *ptrC = &c[0][0];;
int *ptra = &a[0][0];
int *ptrb = &b[0][0];
printf(" PARA MATRIZ 1\n");
printMatrix(ptra,3,3);
printf(" PARA MATRIZ 2\n");
printMatrix(ptrb,3,3);
do{
printf("1. SUMA\n");
printf("2. RESTA\n");
printf("3. MULTIPLICACION\n ");
printf("\n INGRESE UNA OPCION \n");
scanf("%d",&opt);
switch(opt){
	case 1:
	printf(" \n MATRIX SUMADA \n");
    sumaMatrix(ptrC, ptrb, ptra,3);
    break;
 	case 2:
    printf(" \n MATRIX RESTADA \n");
    restaMatrix(ptrC, ptrb, ptra,3);
    break;
	case 3:
    printf(" \n MATRIX MULTIPLICADA \n");
    multiplicacionMatrix(ptra, ptrb, ptrC,o);
    break;
    default: printf("OPCION INCALIDA, INTRODUZCA OTRA OPCION.\n");
    break;
 }
printf("DESEA REALIZAR OTRA OPERACION? S N \n");
rep = getch();
}while((rep=='S') || (rep=='s'));
}
void scanfVector(int *ptr,int size){
int valor;
for (int i=0; i<size; i++){
	for(int j = 0; j < size ; j++){
	printf("[%d][%d]: \n",i,j);
	scanf("%d",&valor);
    *(ptr+j+(i*size)) = valor;
	}
}}
void printMatrix(int *ptr,int size1, int size2){
	for(int i = 0; i < size1 ; i++){
		for(int j = 0; j < size2 ; j++){
			printf("%d\n",*(ptr+j+(i*size1)));
		}
	}
}
void printMatrix(int arr[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\n",arr[i][j]);
		}
	}
}
void sumaMatrix(int *ptr, int *ptrb, int *ptr2, int x){
	int suma =0;
	for(int i = 0; i<x; i++){
        for(int j = 0; j<x; j++){
            *(ptr+j+(i*x)) = *(ptr2+j+(i*x))+ *(ptrb+j+(i*x)) ;
            printf("%d\n",*(ptr+j+(i*x)));
		}
}}
void restaMatrix(int *ptr, int *ptrb, int *ptr2, int x){
int suma =0;
for(int i = 0; i<x; i++){
    for(int j = 0; j<x; j++){
        *(ptr+j+(i*x)) = *(ptr2+j+(i*x)) - *(ptrb+j+(i*x));
        printf("%d\n",*(ptr+j+(i*x)));
		}
}
}
void multiplicacionMatrix(int *ptr2, int *ptrb, int *ptr, int &x){
int v=0;
for(int i=0; i<x; i++){
    for(int j =0; j<x;j++){
	  	*(ptr+j+(i*x))=v;
        printf("%d\n",*(ptr+j+(i*x)));
	  }
  }
}
