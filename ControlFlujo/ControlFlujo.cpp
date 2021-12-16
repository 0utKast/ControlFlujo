#include <iostream>

int main()
{
    std::cout << "Escribe un entero: ";

    int x{};
    std::cin >> x;

    std::cout << "Has escrito " << x;

    return 0;
}
























// excepciones
#include <iostream>


int main() {
    
    try
    {
        throw 20;
    }
    catch (int e)
    {
        
        std::cout << "Ocurrio una excepcion. Excepcion Nr. " << e << '\n';
    }
    return 0;

}














/*#include <cstdlib> // para std::exit()
#include <iostream>

void cleanup()
{
    // el código aquí hace cualquier tipo de limpieza necesaria
    std::cout << "cleanup!\n";
}

int main()
{
    std::cout << 1 << '\n';
    cleanup();

    std::exit(0); // termina y devuelve status code 0  al sistema operativo

    // las siguiente declaración nunca se ejecuta
    std::cout << 2 << '\n';

    return 0;
}*/















/*#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " " <<'\n';
    }
    return 0;
}*/















/* //ejemplo función
#include <iostream>


int suma(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int main()
{
    int z;
    z = suma(5, 3);
    std::cout << "El resultado es " << z;
}*/


















/*// Este programa calcula el promedio de números escritos por el usuario.
// Si el usuario escribe un número negativo, ignora el número y 
// calcula el promedio de números escritos antes de él.

# include <iostream>
using namespace std;

int main()
{    
    float num, promedio, sum = 0.0;
    int i, n;

    cout << "Maximo numero de entradas: ";
    cin >> n;

    for (i = 1; i <= n; ++i)
    {
        cout << "Escribe n" << i << ": ";
        cin >> num;

        if (num < 0.0)
        {
            // Control del programa se mueve a saltar:
            goto saltar;
        }
        sum += num;
    }

saltar:
    promedio = sum / (i - 1);
    cout << "\nPromedio = " << promedio;
    return 0;
}*/

















/*#include <iostream>

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int dia = 4;
    switch (dia) {
    case 1:
        std::cout << "Lunes";
        break;
    case 2:
        std::cout << "Martes";
        break;
    case 3:
        std::cout << "Miércoles";
        break;
    case 4:
        std::cout << "Jueves";
        break;
    case 5:
        std::cout << "Viernes";
        break;
    case 6:
        std::cout << "Sábado";
        break;
    case 7:
        std::cout << "Domingo";
        break;
    }

}*/



















/*#include <iostream>

int main()
{
    std::cout << "Escribe un entero: ";

    int x{};
    std::cin >> x;

    std::cout << "Has escrito " << x;

    return 0;
}*/