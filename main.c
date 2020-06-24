///  _____   ____    ___   __  __   _____
/// | ____| / ___|  |_ _| |   /  | | ____|
/// |  _|   |___ \   | |  | |\/| | |  _|
/// | |___   ___) |  | |  | |  | | | |___
/// |_____| |____/  |___| |_|  |_| |_____|
/// INSTITUTO POLITECNICO NACIONAL
///         Final Project
///"From the origin - Neo Galactic."
///    Johan D. Cruz Morales
///    22nd June 2020, Mexico
/// Copyright (c) Sennoidal, 2020.
/// support about@sennoidal.com
///      www.sennoidal.com


/// This program is educational, has no
/// marketing and/or promotion weapons in
///    the United Mexican States.


/// If you modify or based in this program
/// you should not change the name of the creator.

/// "@marscolony is coming....."


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define pass "ipn12345"

/// Global Variables
int i,j;
char name[20];
float altura,diametro,fuel,sello,KNO3,C12H22O11,impulso,tiempo;


///Prototype Functions
void password (void);
void loading (void);
void portada (void);
void menu (void);
void ingresar (void);
void verificar (void);
void combustible(void);
void proceso(void);
void empuje(void);
void vuelo(void);


int main ()
{
    password();
    loading();
    portada();
    menu();
    return 0;

}

///Console Cursor Position
gotoxy (int x,int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hcon,dwPos);
}



void password ()
{
    setlocale(LC_CTYPE, "Spanish");
    system("color 70");
    int cont=0,correcto=0;
    char contra [10];
    gotoxy (47,14); printf("Introduce la contraseña");
    gotoxy (54,15); scanf("%s",&contra);
    if (strcmp(contra,pass)==0)
        correcto==1;
    else
    {
        while (strcmp(contra,pass)!=0&&cont<3)
        {
            int intentos;
            cont++;
            system("cls");
            intentos=4-cont;
            gotoxy(39,14); printf("Password Incorrecta, Tienes %d intentos",intentos);
            gotoxy(54,15); scanf("%s",contra);
        }
    }
        if (cont>=3&&correcto==0)
        {
            system("cls");
            gotoxy(47,14); printf("Agotaste los 3 intentos");
            gotoxy(40,15); printf("Copyright (c) Sennoidal, Mexico. 2020");
            gotoxy(0,25);
            exit(0);
        }
}



void loading()
{
    system("cls");
    gotoxy(55,13); printf("Loading");
    gotoxy(40,27); printf("Copyright (c) Sennoidal, Mexico. 2020");
    gotoxy(45,15);
    for (int a=65;a<=90;a++)
        {
            printf("%c",a);
            Sleep(10);
        }
        gotoxy(0,29);
}


void portada()
{
    setlocale(LC_CTYPE, "Spanish");
    system("color 70");
    system("cls");
    gotoxy(45,4);  printf("INSTITUTO POLITÉCNICO NACIONAL");
    gotoxy(34,6);  printf("ESCUELA SUPERIOR DE INGENIERÍA MECÁNICA Y ELÉCTRICA");
    gotoxy(51,8);  printf("UNIDAD ZACATENCO");
    gotoxy(46,12); printf("Fundamentos de programación");
    gotoxy(44,14); printf("María Ivonne Gutiérrez Villalba");
    gotoxy(53,17); printf("PROYECTO FINAL");
    gotoxy(45,18); printf("Desde el origen - Neo Galactic");
    gotoxy(49,21); printf("Johan D. Cruz Morales");
    gotoxy(55,23); printf("Junio 2020");
    gotoxy(0,28);
    system("pause");

        ///Change 1
            system("cls");
            gotoxy(45,15); printf("Ingresa tu nombre:  "); scanf("%s",name);
            system("cls");
            gotoxy(54,2);  printf("Hola %s.",name);
            gotoxy(22,5);  printf("Éste es un programa de planeación y cálculo para desarrollar un cohete");
            gotoxy(22,6);  printf("de propulsión solida. Teniendo la función de una calculadora, ayudándote");
            gotoxy(22,7);  printf("durante la fabricación del motor, además de conocer los parametros correctos");
            gotoxy(22,8);  printf("del cohete, sin embargo iremos agregando muchas mas funciones en un futuro.");
            gotoxy(22,12); printf("Agradezco a la profesora María Ivonne Gutiérrez Villalba por las clases");
            gotoxy(37,13); printf("impartidas durante este confinamiento.");
            gotoxy(22,17); printf("Hace 50 años el hombre hizo historia, al aterrizar en la superfiece lunar");
            gotoxy(24,18); printf("y marcar unión entre la humanidad y la maquina, pues una computadora");
            gotoxy(24,19); printf("permitió desarrollar los cálculos necesarios para cumplir ese sueño.");
            gotoxy(28,20); printf("Las computadoras no son una amenaza, son nuestra salvación.");
            gotoxy(48,22); printf("Johan D. Cruz Morales");
            gotoxy(22,28);
            system("pause");

            ///Change 2
                system("cls");
                int load=0,a=37;
                gotoxy(52,12); printf("Bienvenido %s.",name);
                gotoxy(42,14); printf("A continuación se mostrará un menú");
                gotoxy(42,15); printf("deberás seleccionar una opción, con");
                gotoxy(48,16); printf("el número de su pocición.");
                    for (i=0;i<=99;i++)
                    {
                        load=load+1;
                        gotoxy(52,18); printf("Cargando %d %c",load,a);
                        Sleep(5);
                    }
                        gotoxy(0,29);
                        system("pause");
                        return 0;
}


void menu()
{
    system("cls");
    setlocale(LC_CTYPE, "Spanish");
    int opc;
        do
        {
        gotoxy(2,8);printf("-----MENÚ-----");
        gotoxy(2,10);printf("1. Iniciar");
        gotoxy(2,11);printf("2. Combustible Necesario");
        gotoxy(2,12);printf("3. Proceso de Elaboración");
        gotoxy(2,13);printf("4. Fuerza de Empuje");
        gotoxy(2,14);printf("5. Estimación de Vuelo");
        gotoxy(2,15);printf("6. Verificar Datos");
        gotoxy(2,18);printf("7. Salir");
        gotoxy(40,28); printf("Copyright (c) Sennoidal, Mexico. 2020");
        gotoxy(2,20);printf("¿Qué Opción Eliges %s? ",name);scanf("%d",&opc);
                switch (opc)
                {
                    case 1:
                        system("cls");
                        gotoxy(42,14); printf("--- Seleccionaste la Opción 1 ---");
                        gotoxy(42,15); printf("            Iniciar"); gotoxy(57,16);
                        Sleep(200);
                        ingresar();
                        break;
                    case 2:
                        system("cls");
                        gotoxy(43,14); printf("--- Seleccionaste la Opción 2 ---");
                        gotoxy(43,15); printf("       Combustible Necesario"); gotoxy(60,16);
                        Sleep(200);
                        combustible();
                        break;
                    case 3:
                        system("cls");
                        gotoxy(43,14); printf("--- Seleccionaste la Opción 3 ---");
                        gotoxy(43,15); printf("      Proceso de Elaboración"); gotoxy(60,16);
                        Sleep(200);
                        proceso();
                        break;
                    case 4:
                        system("cls");
                        gotoxy(42,14); printf("--- Seleccionaste la Opción 4 ---");
                        gotoxy(42,15); printf("         Fuerza de Empuje"); gotoxy(57,16);
                        Sleep(200);
                        empuje();
                        break;
                    case 5:
                        system("cls");
                        gotoxy(42,14); printf("--- Seleccionaste la Opción 5 ---");
                        gotoxy(42,15); printf("        Estimación de Vuelo"); gotoxy(57,16);
                        Sleep(200);
                        vuelo();
                        break;
                    case 6:
                        system("cls");
                        gotoxy(42,14); printf("--- Seleccionaste la Opción 6 ---");
                        gotoxy(42,15); printf("        Verificar Datos"); gotoxy(57,16);
                        Sleep(200);
                        verificar();
                        break;
                    case 7:
                        system("cls");
                        gotoxy(45,15); printf("Copyright (c) Sennoidal, 2020");
                        gotoxy(51,16); printf("www.sennoidal.com");
                        gotoxy(0,29);
                        Sleep(3000);
                        exit(0);
                        break;
                    default:
                        system ("cls");
                        gotoxy(50,14); printf("Opción Invalida :(");
                        gotoxy(50,15); printf("Intenta de nuevo");
                        break;
                }
                gotoxy(0,29); system("pause");
                system("cls");
        }
    while (opc<=100);
}


void ingresar()
{
        system("cls");
        system("color 70");
        gotoxy(32,7); printf("Para comenzar con el desarrollo de tu cohete primero");
        gotoxy(32,8); printf("necesitamos conocer la altura que debera tener tu motor.");
        gotoxy(34,16); printf("Ingresa la altura de tu motor:"); printf("\tCentimetros");
        gotoxy(66,16); scanf("%f",&altura);
        if (altura>=10.1||altura<=0)
            {
                system("cls");
                system("color C0");
                gotoxy(28,14); printf("%s Tu cohete tiene una altura no permitida, vuelve a intentar",name);gotoxy(60,15);
                Sleep(2000);
                ingresar();
            }
            else
                {
                system("cls");
                gotoxy(27,9); printf("Ahora necesitamos conocer el diametro interno que tiene tu motor.");
                gotoxy(34,16); printf("Ingresa el diametro de tu motor: "); printf("\t  Centimetros");
                gotoxy(68,16); scanf("%f",&diametro);
                }

}


void combustible()
{
        system("cls");
        float hsello=1.27;
        fuel=M_PI*pow(diametro/2,2)*(altura-(hsello*2));
        sello=M_PI*pow(diametro/2,2)*hsello;
        gotoxy(36,4); printf("%s Tú Cohete Necesita %.2f Gramos de Propelente",name,fuel);
        gotoxy(20,9);  printf("                            %.2f Gramos de Propelente",fuel);
        gotoxy(20,10); printf("             ______________________________________________________");
        gotoxy(20,11); printf("            |                                                      |");
        gotoxy(20,12); printf("      ____________________________________________________________________");
        gotoxy(20,13); printf("     |      |                                                      |      |");
        gotoxy(20,14); printf("     |      |                                                      |      |");
        gotoxy(20,15); printf("     |      |             INSTITUTO POLITÉCNICO NACIONAL           |      |");
        gotoxy(20,16); printf("     |      |                                                      |      |");
        gotoxy(20,17); printf("     |______|______________________________________________________|______|");
        gotoxy(20,19); printf("     |______|                                                      |______|");
        gotoxy(20,21); printf("%.1f Gramos de Sello                                            %.1f Gramos de Sello",sello,sello);
             if (altura==0,diametro==0)
            {
               gotoxy(36,4); printf("     %s Aún no haz ingresado ningun dato          ",name);
               gotoxy(20,9);  printf("                          Aún no haz ingresado datos    ");
               gotoxy(18,21); printf("Aún no haz ingresado datos                                Aún no haz ingresado datos   ");
            }
}


void proceso()
{
    system("cls");
    float hsello=1.27;
    fuel=M_PI*pow(diametro/2,2)*(altura-(hsello*2));
    sello=M_PI*pow(diametro/2,2)*hsello;
    KNO3=fuel*.65;
    C12H22O11=fuel-KNO3;
    if (altura==0,diametro==0)
        {
            gotoxy(42,14); printf("%s Aún no haz ingresado datos :(",name);
            }
            else
            {
                gotoxy(31,4); printf("%s de acuerdo con los %.2f centimetros de altura y los",name,altura-2.54);
                gotoxy(30,5); printf("%.2f centimetros de diametro que tiene el deposito donde se",diametro);
                gotoxy(29,6); printf("almacenará el propelente que le dará impulso a tu cohete para");
                gotoxy(30,7); printf("volar, necesitas 65%c de Nitrato de potasio y 35%c de sacarosa.",'%','%');
                gotoxy(10,12); printf("1. Antes de mezclar las sustancias tienes que verificar la cantidad correcta que deberas agregar.");
                gotoxy(10,13); printf("2. Ahora deberas mezclar las dos suctancias por 2 minutos.");
                gotoxy(10,14); printf("3. Finalmente introduciras en el deposito tu propelente y deberá ser compactado.");
                gotoxy(50,18); printf("%s Tú cohete necesita",name);
                gotoxy(30,20); printf(" Nitrato de potasio \t\t\t         Sacarosa");
                gotoxy(31,21); printf("KNO3 = %.2f gramos\t\t\t",KNO3);printf("C12H22O11 = %.2f gramos",C12H22O11);
                gotoxy(45,24); printf("Propelente total %.2f gramos",fuel);
            }

}

void empuje()
{
    system("cls");
    float hsello=1.27;
    fuel=M_PI*pow(diametro/2,2)*(altura-(hsello*2));
    impulso=((fuel*2)*9.8)*.04;
    if (altura==0,diametro==0)
        {
            gotoxy(41,14); printf("%s Aún no haz ingresado datos :(",name);
            }
            else
                {
                gotoxy(36,10); printf("%s de acuerdo con tus datos ingresados, tu cohete",name);
                gotoxy(42,11); printf("tendrá la siguiente fuerza de empuje.");
                gotoxy(53,16); printf("%f Newtons",impulso);
                }

}

void vuelo()
{
    system("cls");
    float hsello=1.27;
    fuel=M_PI*pow(diametro/2,2)*(altura-(hsello*2));
    impulso=((fuel*2)*9.8)*.04;
    tiempo=impulso/0.981;
    if (altura==0,diametro==0)
        {
            gotoxy(41,14); printf("%s Aún no haz ingresado datos :(",name);
            }
            else
                {
                system("cls");
                gotoxy(32,9); printf("%s según tus datos ingresados y sin tomar en cuenta",name);
                gotoxy(33,10); printf("la fuerza de rozamiento del aire o imperfección en la");
                gotoxy(30,11); printf("estructura, tu cohete deberá volar durante el siguiente tiempo.");
                gotoxy(52,16); printf("%f Segundos",tiempo);
                }

}

void verificar()
{
    system("cls");
    float hsello=1.27;
    fuel=M_PI*pow(diametro/2,2)*(altura-(hsello*2));
    sello=M_PI*pow(diametro/2,2)*hsello;
    KNO3=fuel*.65;
    C12H22O11=fuel-KNO3;
    impulso=((fuel*2)*9.8)*.04;
    tiempo=impulso/0.981;
    gotoxy(9,2); printf("%s tu cohete tiene los siguientes valores:",name);
    gotoxy(5,5); printf("     --- Altura ---     \t      --- Diametro --- ");
    gotoxy(5,6); printf("Altura %.1f centimetros \t Diametro %.1f centimetros",altura,diametro);
    gotoxy(16,10); printf("--- Combustible necesario ---");
    gotoxy(23,11); printf("%.2f gramos",fuel);
    gotoxy(3,13);  printf("%.2f gramos de KNO3\t\t  %.2f gramos de C12H22O11",KNO3,C12H22O11);
    gotoxy(12,17); printf("--- Fuerza de empuje N-segundos ---");
    gotoxy(20,18); printf("%f Newtons",impulso);
    gotoxy(18,22); printf("--- Tiempo de vuelo ---");
    gotoxy(22,23); printf("%.2f Segundos",tiempo);
    gotoxy(75,7);  printf("             __    ");
    gotoxy(75,8);  printf("   ________    |   ");
    gotoxy(75,9);  printf("  |  ||||  |   |   ");
    gotoxy(75,10); printf("  |  ||||  |   |   ");
    gotoxy(75,11); printf("  |  ||||  |   |   ");
    gotoxy(75,12); printf("  |  ||||  |   |   ");
    gotoxy(75,13); printf("  |  ||||  |   |  Altura de %.1f centimetros",altura);
    gotoxy(75,14); printf("  |  ||||  |   |   ");
    gotoxy(75,15); printf("  |__||||__|   |   ");
    gotoxy(75,16); printf("     /  \\      |   ");
    gotoxy(75,17); printf("    |    |     |   ");
    gotoxy(75,18); printf("    |____|     |   ");
    gotoxy(75,19); printf("             __|   ");
    gotoxy(70,21); printf("Diametro de %.1f centimetros",diametro);
        if (altura==0,diametro==0)
            {
                gotoxy(4,6); printf("Aún no haz ingresado datos \t  Aún no haz ingresado datos ");
                gotoxy(75,13); printf("  |  ||||  |   |  Aún no haz ingresado datos");
                gotoxy(70,21); printf("Aún no haz ingresado datos ");
                gotoxy(16,11); printf("Aún no haz ingresado datos");
                gotoxy(3,13);  printf("Aún no haz ingresado datos\t Aún no haz ingresado datos");
                gotoxy(16,18); printf("Aún no haz ingresado datos");
                gotoxy(16,23); printf("Aún no haz ingresado datos");
            }
}
