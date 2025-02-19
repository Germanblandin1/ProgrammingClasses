# Test de Punteros y Manejo de Memoria

## Preguntas Teóricas

1. **¿Qué almacena un puntero?**  
   a) Un valor numérico  
   b) Una dirección de memoria  
   c) Un nombre de variable  
   d) Un tipo de dato  

2. **¿Qué sucede si desreferenciamos un puntero nulo?**  
   a) Se obtiene el valor por defecto del tipo de dato  
   b) Se accede a una dirección de memoria inválida, lo que puede causar un error  
   c) Se imprime un 0 automáticamente  
   d) No ocurre nada  

3. **¿Cuál es la diferencia entre un puntero simple y un puntero doble?**  

4. **¿Cuándo es recomendable usar punteros en lugar de variables normales?**  

---

## Ejercicios Prácticos

### 1. ¿Cuál es la salida del siguiente código en C++?
```cpp
#include <iostream>
using namespace std;

void modificar(int** p) {
    **p = 20;
}

int main() {
    int x = 10;
    int* ptr = &x;
    int** dptr = &ptr;
    modificar(dptr);
    cout << x << endl;
    return 0;
}
```

Opciones:
   a) 10  
   b) 20  
   c) Dirección de memoria de `x`  
   d) Error de compilación  

---

### 2. ¿Cuál es la salida del siguiente código en Go?
```go
package main
import "fmt"

func cambiar(ptr ***int) {
    ***ptr = 42
}

func main() {
    x := 5
    p := &x
    pp := &p
    ppp := &pp
    cambiar(ppp)
    fmt.Println(x)
}
```

Opciones:
   a) 5  
   b) 42  
   c) Dirección de memoria de `x`  
   d) Error de compilación  

---

### 3. Analiza este código en C++ y responde cuál será la salida:
```cpp
#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int* temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    intercambiar(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}
```

Opciones:
   a) 10 20  
   b) 20 10  
   c) 0 0  
   d) Dirección de memoria de `x` y `y`  

Explica por qué el resultado es el que elegiste.

---

### 4. Código confuso con punteros múltiples en Go
```go
package main
import "fmt"

func modificar(p **int) {
    **p = **p + 5
}

func main() {
    x := 10
    p := &x
    pp := &p
    modificar(pp)
    fmt.Println(x)
}
```

¿Qué imprime este programa?
   a) 10  
   b) 15  
   c) Dirección de memoria de `x`  
   d) Error de compilación  

---

### 5. Pregunta de lógica sobre punteros en C++
```cpp
#include <iostream>
using namespace std;

void confuso(int*** p) {
    ***p = 30;
}

int main() {
    int valor = 5;
    int* p1 = &valor;
    int** p2 = &p1;
    int*** p3 = &p2;
    confuso(p3);
    cout << valor << endl;
    return 0;
}
```

¿Cuál es la salida esperada?
   a) 5  
   b) 30  
   c) Dirección de memoria de `valor`  
   d) Error de compilación  

Explica detalladamente la razón del resultado obtenido.

---

## Desafío Extra:
Crea un código en C++ o Go que tenga una estructura de datos compleja con punteros triples y realiza operaciones sobre ella, como asignación y modificación de valores. Luego, explica paso a paso cómo se accede a los valores usando los punteros.
