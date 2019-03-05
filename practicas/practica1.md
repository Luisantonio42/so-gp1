# Objetivo
Crear dos llamadas a sistema con sus respectivos comandos para apagar y reiniciar

## Herramientas
make
gcc
git

## Conceptos
1) Llamadas a sistema

* Se usas para acceder a hardware
* Desde el comando son una interrupción 
* Kernel usan el código del hardware específico

2) Modo kernel
+ Es el bit para acceder al hardware
+ Se prende cuando se ejecuta el kernel

3) Interrupciones
+ Como el hw interactúa con el cpu

4) Interrupciones vía software (trap)
+ Software comunicar con el kernel, SFT->CPU->KERNEL

## Url del commit
https://github.com/Luisantonio42/so-gp1/commit/afe8a96b7fecaaac985b823f6b1f97e8fbc23c42

## Que aprendi
Aprendí el proceso necesario para poder agregar las funciones de apagar y reiniciar a nuestro sistema operativo. El cual fue un poco confuso debido a que necesitabamos de crear varias funciones, declarar su funcionamiento y hacerlas visibles para que se pudieran ejecutar. Sin embargo el proceso fue muy interesante. Me gusto mucho el poder realizar de manera satisfactoria el cometido.
