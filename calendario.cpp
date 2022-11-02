#include <iostream>
#include <iomanip>
using namespace std;

//Programa que pide al usuario que le introduzca el número de un mes y un año y se le muestra el calendario de ese mes de dicho año
//siempre y cuando sean correctos.



//Pre: ------
//Post: pide el mes y el año y se asegura de que sean correctos(1 <= mes <= 12 y agno >= 1900)
void pedirDatos(unsigned& mes, unsigned& agno) {
    bool si1 = true;
    bool si2 = true;

    while(si1 == true) {
        cout << "Introduzca por favor un mes[1-12]: ";

        cin >> mes;

        if (mes < 0 || mes > 12) {
            cout << "El mes debe estar entre 1 y 12." << endl;
        }
        else {
            si1 = false;
        }
    }
    while (si2 == true) {
        cout << "Introduzca por favor un año igual o superior a 1900: ";
        cin >> agno;

        if (agno < 1900) {
            cout << "El año debe ser igual o superior a 1900" << endl;
        }
        else {
            si2 = false;
        }
    }
}

//Pre: agno >= 1900 y 1 <= mes <= 12
//Post: escribe las 3 primeras lineas del calenda
void escribirCabecera(unsigned mes,unsigned agno) {
string meses[12] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO",
                    "JULIO", "AGOSTO", "SEPTIEMBRE",  "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};

cout << endl << setw(23) << right << setfill(' ') << meses[mes-1] << " " << agno << endl;
cout << setw(4) << "L" << setw(4) << "M" << setw(4) << "X" << setw(4 ) << "J" << setw(4) << "V" << setw(4) << "S" << setw(4) << "D" << endl;
for (int i = 0; i <= 27; i++){
    cout << "-";
}
cout << endl;
}

//Pre: agno >= 1900
//Post: devuelve true si el año es bisiesto y false si no lo es
bool esBisiesto(unsigned agno) {
    if(agno%100==0) {
        if(agno%400==0) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (agno%4==0) {
        return true;
    }
    else {
        return false;
    }
}


//Pre: 1 <= mes <= 12 y agno >= 1900
//Post: devuelve el número de dìas que tuvo ese mes de ese año

unsigned diasDelMes(unsigned mes, unsigned agno) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    else if(esBisiesto(agno) == true) {
        return 29;
    }
    else {
        return 28;
    }
}



//Pre: año > 1582
//Post: devuelve el número de días que tiene el año introducido.
unsigned diasdelAgno(unsigned agno){
    if(esBisiesto(agno) == true) {
        return 366;
    }
    else {
        return 365;
    }
}

//Pre: 1 <= dia <= 31, 1<=mes<=12 y agno >1582 y la fecha formada por dia/mes/agno es una fecha válidad el calendario gregoriano
//Post: devuelve el número de día que es el dia dentro del año
unsigned diaenelAgno(unsigned dia, unsigned mes, unsigned agno) {
    unsigned diasacumulados = 0;
    for(unsigned i = 1; i < mes; i++) {
        diasacumulados = diasacumulados + diasDelMes(i, agno);
    }
    return diasacumulados + dia;
}

unsigned diadelaSemana(unsigned dia, unsigned mes, unsigned agno) {
    unsigned diasacumulados=0;
    unsigned numdia;
    for(unsigned i = 1900; i < agno; i++) {
    diasacumulados = diasacumulados + diasdelAgno(i);
    }
    diasacumulados=diasacumulados + diaenelAgno(dia,mes,agno);
    numdia = diasacumulados%7-1;
    return numdia;
}
//Pre : 1 <= mes <= 12 && agno <= 1900
//Post : escribe el calendario del mes correspondiente del año pedido
void presentarCalendario(unsigned mes, unsigned agno) {
    escribirCabecera(mes,agno);
    if(diadelaSemana(1, mes,agno)==0){
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
        cout << setw(4) << i;
    if (i%7 == 0) {
         cout << endl;
    }
    }
    }
    else if(diadelaSemana(1, mes,agno)==1) {
    cout << "    ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+1)%7 == 0) {
    cout << endl;
    }
    }
    }
    else if(diadelaSemana(1, mes,agno)==2) {
    cout << "        ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+2)%7 == 0) {
    cout << endl;
    }
    }
    }
    else if(diadelaSemana(1, mes,agno)==3) {
    cout << "            ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+3)%7 == 0) {
    cout << endl;
    }
    }
    }
        else if(diadelaSemana(1, mes,agno)==4) {
    cout << "                ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+4)%7 == 0) {
    cout << endl;
    }
    }
    }
        else if(diadelaSemana(1, mes,agno)==5) {
    cout << "                    ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+5)%7 == 0) {
    cout << endl;
    }
    }
    }
    else {
    cout << "                        ";
    for (unsigned i = 1; i<=diasDelMes(mes,agno); i++) {
    cout << setw(4) << i;
    if ((i+6)%7 == 0) {
    cout << endl;
    }
    }
    }

}
int main() {
    unsigned mes, agno;
    pedirDatos(mes, agno);
    presentarCalendario(mes,agno);
    return 0;
}