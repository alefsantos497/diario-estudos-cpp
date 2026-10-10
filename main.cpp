#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, double> estudos;

void registrarEstudo(string estudo, double horas){
    estudos.insert({estudo, horas});
}


int main(){
    int exitCode = 1;
    while(exitCode != 0){
        int option = 0;
        cout << "          DIARIO DE ESTUDOS" << endl;
        cout << "#########################################" << endl;
        cout << "## Digite a opcao que deseja realizar: ##" << endl;
        cout << "## 1 - Registrar Estudo                ##" << endl;
        cout << "## 2 - Listar Estudos                  ##" << endl;
        cout << "## 0 - Sair                            ##" << endl;
        cout << "#########################################" << endl;
        cin >> option;
        cin.ignore();
        string estudo = "";
        double horas = 0;
        try{
            switch(option){
                case 1:
                    cout << "Registrar Estudo" << endl;
                    cout << "Digite o nome do estudo: " << endl;
                    getline(cin, estudo);
                    cout << "Digite a quantidade de horas que voce estudou: " << endl;
                    cin >> horas;
                    registrarEstudo(estudo, horas);
                    break;
                case 2:
                    cout << "Lista de estudos" << endl;
                    for(const auto& estudo : estudos){
                        cout << "Materia: " << estudo.first << " - " << "Tempo: " << estudo.second << "h" << endl;
                    }
                    break;
                case 0:
                    cout << "Finalizado com sucesso" << endl;
                    exitCode = 0;
                    break;
                default:
                    throw 1;
                    break;
            }
        }catch(int e){
            cout << "Opcao invalida" << endl;
        }
    }
    
    
    
    return 0;
}
