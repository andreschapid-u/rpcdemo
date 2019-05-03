/* date.x - Especificación del servicio de fecha remota. Interface remota*/

/* Se definen 2 procedimientos: * bin_date_1() retorna la fecha y la hora en binario (no necesita argumentos). 

/* str_date_1() retorna un valor de fecha en decimal a partir del valor binario. */

program DATE_PROG {  /* Nombre de la interface - mayuscula*/

      version DATE_VERS { 

            long BIN_DATE(void) = 1; /* procedimiento número = 1 */ 

            string STR_DATE(long) = 2; /* procedimiento número = 2 */ 

      } = 1; /* versión número = 1 */

} = 0x31234567; /* programa número = 0x31234567 */ 


