
#include <iostream>

using namespace std;

class CNumber {
  private:
    int num1, num2, num3;
  
  public:
    CNumber(int n1, int n2, int n3);
  
    int SetNum1();
    int SetNum2();
    int SetNum3();
  
    int CalcularMaximo();
    int CalcularMinimo();
    float CalcularPromedio();
    int ContarPares();
    int ContarImpares();
};

CNumber::CNumber(int n1, int n2, int n3) {
    num1 = n1;
    num2 = n2;
    num3 = n3;
}

int CNumber::SetNum1() {
    return num1;
}

int CNumber::SetNum2() {
    return num2;
}

int CNumber::SetNum3() {
    return num3;
}

int CNumber::CalcularMaximo() {
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    return max;
}

int CNumber::CalcularMinimo() {
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    return min;
}

float CNumber::CalcularPromedio() {
    return (num1 + num2 + num3) / 3.0;
}

int CNumber::ContarPares() {
    int count = 0;
    if (num1 % 2 == 0) {
        count++;
    }
    if (num2 % 2 == 0) {
        count++;
    }
    if (num3 % 2 == 0) {
        count++;
    }
    return count;
}

int CNumber::ContarImpares() {
    int count = 0;
    if (num1 % 2 != 0) {
        count++;
    }
    if (num2 % 2 != 0) {
        count++;
    }
    if (num3 % 2 != 0) {
        count++;
    }
    return count;
}

int main() {
    int n1 = 10, n2 = 23, n3 = 50;
    CNumber numeros(n1, n2, n3);
    cout << "El maximo de los 3 numeros es: " << numeros.CalcularMaximo() << endl;
    cout << "El minimo de los 3 numeros es: " << numeros.CalcularMinimo() << endl;
    cout << "El promedio de los 3 numeros es: " << numeros.CalcularPromedio() << endl;
    cout << "La cantidad de elementos pares es: " << numeros.ContarPares() << endl;
    cout << "La cantidad de elementos impares es: " << numeros.ContarImpares() << endl;
    return 0;
}

