## Objetivo
Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa interior.

## Herramientas

make 

gcc

git

## Conceptos

1) Proceso

+ Instancia de un programa.
+ Esta compuesto de 3 partes
++ stack: variables y funciones esta limitado. Crece de arriba hacia abajo. Stack Overflow.
++ heap: area de memoria dinámica = RAM + SWAP.
++ código: segmentado, ie es una parte.

+ Tiene estados
+ Se crean mediate dos llamadas a sistema:
++ fork: clone
++ exec: cambia código

+ Hay un proceso padre
++ init


## Que aprendi
Con esta práctica aprendí que como nuestro sistema operativo no tiene librerías implementadas nosotros tenemos que idear las formas de poder solucionar problemas. Eso en primera instancia, después pude ver más a fondo el desarrollo de una función del sistema operativo. En este caso la de imitar el comando anterior. También aprendí el valor "\0" que es referente a un valor nulo en código ASCII.
También como es que funcionan los forks en un sistema operativo y como se ejecutan ciertas funciones.

## Url del commit
https://github.com/Luisantonio42/so-gp1/commit/fb1dd8641333f8dc63f3edf979dcb756bd796126
