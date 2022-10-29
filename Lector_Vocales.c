
#include <stdio.h>
#define LIM 20
#define LIM_FGETS 21		// Pemite que el verdadero limite del string ingresado sea LIM, ya que LIM_FGETS reserva una posicion para el NULL o '\0'

void Lector_Vocales (char string[LIM]);

int main()
{
	char string[LIM] = {'\0'}, decision;
	printf("\nBienvenido a nuestro programa...\n");
	printf("Ingrese un string de MAXIMO 20 caraters para contar las vocales\n>>> ");
	fgets(string, LIM_FGETS, stdin);
	for (int i = 0; i < LIM; i++)
	{
		if (string[i] == 10)		// En la tabla ASCII el 10 corresponde al ENTER
		{
			string[i] = '\0';		// Reemplazo el ENTER por un NULL para que la lectura de caracteres termine hasta esa posicion,
		}							// ademas de la estetica, para que no imprima un ENTER en el ultimo printf()
	}
	printf("El string a evaluar sera: ");
	for (int i = 0; i < LIM; i++)
	{									// for dedicado para evitar impresion incorrecta del string, Atte. Matias Mansilla
		printf("%c", string[i]);		// ya que con un string de 20 cacaterers, al imprimirlo con un printf("%s", string)
	}									// se imprimia un carater no esperado (¶)
	printf("\n");
	Lector_Vocales (string);
	return 0;
}

void Lector_Vocales (char string[LIM])
{
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	for (int x = 0; x < LIM; x++)
	{
		if ((string[x] == 'a') || (string[x] == 'A')) a++;
		if ((string[x] == 'e') || (string[x] == 'E')) e++;
		if ((string[x] == 'i') || (string[x] == 'i')) i++;
		if ((string[x] == 'o') || (string[x] == 'O')) o++;
		if ((string[x] == 'u') || (string[x] == 'U')) u++;
	}
	printf("En los caracteres ingresados se encuentran las siguientes vocales: \n");
	printf("a -> %d\n", a);
	printf("e -> %d\n", e);
	printf("i -> %d\n", i);
	printf("o -> %d\n", o);
	printf("u -> %d\n", u);
}
