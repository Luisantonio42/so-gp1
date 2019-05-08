# Objetivo
Hacer un spike sobre IPC. Fork/exec, memoria compartida y archivos mapeados a memoria.

# Herrmamientas
- git
- gcc
- xv6
# Conceptos

- IPC
Comunicación entre procesos.

- Señales:
Es un ipc, consta de muchos proceso emisor y receptor. El emisor manda una señal y el receptor deja de hacer lo que este haciendo y ejecuta el código de la señal
Existen varias señales, para listarlas puedo usar el comando kill -l

- Memoria Compartida.
Se crea un bloque de memoria. el bloque de memoria tiene un key.
Cualquier proceso con el key se puede conectar al bloque.
El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.

- Archivos de mapeados a memoria.
Vimos como podemos escribir en la RAM
Los cambios en el bloque se guardan automaticamente

- Estados de un proceso

# Que aprendí
Aprendí como podría hacer un editor de texto. Yo diciendole al programa que caracter quiero cambiar con el índice y darle el caracter.

# Url del commit
- primera parte:
https://github.com/Luisantonio42/so-gp1/commit/56bf7540e841729f8bd481083a0435dc5dabd265

- segunda parte:
https://github.com/Luisantonio42/so-gp1/commit/bfa222c3f8e0bee24375384141c0bdad0d1cd2d9
