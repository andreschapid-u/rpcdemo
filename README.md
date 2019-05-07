## 1   Descargar demo y descomprimir
##  2   Nombramiento de carpeta proyecto entrega
    lsd-rpc-p1-cchapid
    p1 = Practica 1


##  3   definicion de la interface remota
    date.x
    x = extension de xdr

## 4   Generar soportes rpc, desde carpeta de trabajo
    comando => rpcgen date.x

## 5   Distribuir adecuadamente los soportes rpc a las carpetas cliente y servidor
    Compiar date.x y date.h en las carpetas Cliente y Servidor
##  6   Crear plantillas del programa de usuario (PU) y de la rutina de servicio (RU)
        
        Plantilla PU
            carpeta cliente
                comando => rpcgen -Sc date.x > c1.c
            Crear la logica del cliente
            Crear el archibo makefile
                comando => rpcgen -Sm date.x > mkc
                adaptarlo para el cliente

            Compilar fuentes del cliente desde la carpeta cliente
                make -f mkc

        Plantilla RS
            carpeta servidor
                comando => rpcgen -Ss date.x > s1.c
            Crear la logica del servidor            
            Crear el archibo makefile
                comando => rpcgen -Sm date.x > mks
                adaptarlo para el servidor

            Compilar fuentes del cliente desde la carpeta cliente
                make -f mks

***
##  Ejecutamos primero el servidor 
            ./servidor ip (Ejemplo localhost)
        
##  Ejecutamos el cliente 
            ./cliente ip_servidor (Ejemplo localhost)