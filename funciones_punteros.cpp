#include <iostream>

// Función de suma
int suma(int a, int b) {
    return a + b;
}

// Función de resta
int resta(int a, int b) {
    return a - b;
}

int main() {
    // Declaración del array de punteros a funciones
    int(*p[2])(int, int);
    
    // Asignación de las funciones al array
    p[0] = suma;
    p[1] = resta;
    
    // Ejemplo de uso
    int num1, num2;
    std::cout << "Ingrese dos números: ";
    std::cin >> num1 >> num2;
    
    // Usando las funciones a través del array de punteros
    std::cout << "La suma es: " << p[0](num1, num2) << std::endl;
    std::cout << "La resta es: " << p[1](num1, num2) << std::endl;
    
    return 0;
}