#include <stdio.h>
#include <ctype.h>

int main() {
    char palabra[101]; // Se reserva espacio para la palabra de hasta 100 caracteres
    int count_May = 0;
    int count_min = 0;
    
    // Se solicita al usuario ingresar una palabra
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    // Se cuenta el número de letras mayúsculas y minúsculas en la palabra
    for(int i = 0; palabra[i] != '\0'; i++) {
        if(isupper(palabra[i])) {
            count_May++;
        } else {
            count_min++;
        }
    }
    
    // Se decide si la palabra debe estar en mayúsculas o minúsculas
    if(count_May > count_min) {
        // Convertir la palabra a mayúsculas
        for(int i = 0; palabra[i] != '\0'; i++) {
            palabra[i] = toupper(palabra[i]); //Devuelve caracter en Mayusculas
        }
    } else {
        // Convertir la palabra a minúsculas
        for(int i = 0; palabra[i] != '\0'; i++) {
            palabra[i] = tolower(palabra[i]); //Devuelve caracter en minusculas
        }
    }
    
    // Se imprime la palabra corregida
    printf("Palabra corregida: %s\n", palabra);
    
    return 0;
}

