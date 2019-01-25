# Práctica 0

## Objetivo:
Compilar y correr xv6

## Herramientas:
* gcc -> compilador
* qemu -> máquina virtual
* make -> automatizaciones

## Conceptos:
Un programa compuesto de código fuente.
Un sistema operativo que esta compuesto de un kernel y de aplicaciones del sistema.

## Que aprendí:
Al haber realizado esta práctica pude observar de manera detallada el proceso que se lleva para la compilación de un programa, voy a enfatizar el hecho de que nunca había trabajado de esta forma por lo que, el máximo grado de complejidad al que me había enfrentado fue el compilar un archivo de java. Sin embargo aquí fue diferente, en primera porque ya estamos trabajando directamente en la terminal, lo que en un principio me pareció un poco complicado.
Primero, aprendí que el kernel es el encargado de facilitar la comunicación efectiva entre las aplicaciones del sistema con el hardware, una especie de mediador.
Después aprendí que una vez teniendo el archivo se puede compilar con el siguiente comando: gcc "nombre_archivo".c -o "nombre_archivo". El compilador es gcc.
También aprendí que se puede tener una máquina virtual dentro de otra máquina virtual como en el caso de qemu cuya función fue la de correr el sistema operativo xv6. Para hacer eso nos aseguramos de que coincidiera con las especificaciones requeridas.
Ahora hablare de make que es una herramienta que permite construir como es que quieres que sea la ejecución de algún programa y algo que se me hizo interesante fue que además de automatizar procesos, tambián al llamar a una etiqueta tu puedes agregar archivos de los cuales va a depender dicha etiqueta. Por ejemplo que ejecute otra etiqueta antes o que verifique algun dato.
Por último me voy a agregar que este curso me esta gustando bastante porque siento que estoy teniendo una interacción más cercana con el software.
