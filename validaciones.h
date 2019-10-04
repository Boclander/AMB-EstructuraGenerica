#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/**\brief toma lo que ingrese el usuario
 *\param msg char*
 *\param msgError char*
 *\param minimo int
 *\param maximo int
 *\param reintentos int
 *\param resultado char*
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int getString(char *msg, char *msgError, int minimo, int maximo, int reintentos, char *resultado);

/**\brief valida que tenga solo caracteres alfabeticos
 *\param cadena char*
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int isValidName(char *cadena);

/**\brief valida que tenga solo caracteres numericos
 *\param cadena char*
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int isValidint(char* cadena);

/**\brief valida
 *\param mensaje char*
 *\param mensajeError char*
 *\param minimo int
 *\param maximo int
 *\param reintentos int
 *\param resultado char*
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int getInt(char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos, char *resultado);

/**\brief valida que sea un numero y letra
 *\param cadena char*
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int isValidDireccion(char *cadena);

/**\brief valida
 *\param resultado char*
 *\param msg char*
 *\param msgError char*
 *\param minimo int
 *\param maximo int
 *\param reintentos int
 * \return int Return (-1) si hay error [Tamaño no valido o puntero NULL] - (0) si hay exito
 */
int getDireccion(char *resultado, char *msg, char *msgError, int minimo, int maximo, int reintentos);
