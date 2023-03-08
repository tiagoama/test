/*
 ============================================================================
 Name        : testiño.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int any(char s1[], char s2[]){
	int i,j;
	for(i=0; i<strlen(s2); i++){
		for(j=0; j<strlen(s1); j++){
			if (s1[j]==s2[i])
				return j;
		}
	}
	return -1;
}

int main(void) {
	char a[]="Pedro";
	char b[]="o";
	int x;

	x = any(a,b);

	if (x!=-1){
		printf("La primera ocurrencia del caracter %c de s2 se dio en la posicion %d de s1",a[x],x);
	}

	else{
		printf("No se encontro una ocurrencia");
	}

	return EXIT_SUCCESS;
}
