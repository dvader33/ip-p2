#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <time.h>


using namespace std;
int main();
void changeColor(int arreglo[], int number){
    if(arreglo[number]==1){
        system("Color 1A");
        PlaySound(TEXT("do.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    if(arreglo[number]==2){
        system("Color 2A");
        PlaySound(TEXT("re.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    if(arreglo[number]==3){
        system("Color 3A");
        PlaySound(TEXT("mi.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    if(arreglo[number]==4){
        system("Color 4A");
        PlaySound(TEXT("fa.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    if(arreglo[number]==5){
        system("Color 5A");
        PlaySound(TEXT("sol.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
}



void nivel(int numero){
    int teclas [numero];
    int respuesta [numero];
    for (int i=0;i<numero;i++){
        teclas[i] = rand() % 5 + 1;
    }
    for (int i=0;i<numero;i++){
        Sleep(500);
        changeColor(teclas,i);
        cout << " "  << teclas[i];
    }
    cout << endl;
    Sleep(1000);
    system("cls");
    cout << "repite la secuencia" << endl;
    for (int i=0;i<numero;i++){
        cin >> respuesta[i];
        if(respuesta[i] != teclas[i]){
            cout << "perdiste" << endl;
            system("pause");
            main();
        }else {
            changeColor(respuesta,i);
        }
    }
    system("pause");
}

int main(){
srand(time(0));
system("cls");
cout << "Iniciar" << endl;
cout << "Nivel 1" << endl;
system("pause");
nivel(4);

system("cls");
cout << "Iniciar" << endl;
cout << "Nivel 2" << endl;
system("pause");
nivel(5);
return 0;

system("cls");
cout << "Iniciar" << endl;
cout << "Nivel 3" << endl;
system("pause");
nivel(6);
return 0;
}
