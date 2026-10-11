#include <iostream>
#include <map>
#include <string>
#include <limits>
using namespace std;
//Variáveis globais utilizadas no programa
map<string, double> estudos;//Mapa para armazenar os estudos

void registrarEstudo(const string& estudo, double horas){
    estudos[estudo] += horas;
}//Função para registrar um estudo


int main(){
    bool executando = true;//Variável para controlar a execução do programa
//Loop principal do programa
    while(executando){
        int option = 0;
        cout << "          |DIARIO DE ESTUDOS|" << endl;
        cout << "#########################################" << endl;
        cout << "## Digite a opção que deseja realizar: ##" << endl;
        cout << "## 1 - Registrar Estudo                ##" << endl;
        cout << "## 2 - Listar Estudos                  ##" << endl;
        cout << "## 0 - Sair                            ##" << endl;
        cout << "#########################################" << endl;
        cin >> option;
//########################^^Menu de opções^^#########################

        if(cin.eof()){
            cout << "Saindo do programa..." << endl;
            break;
        }/*Se o usuário digitar Ctrl+D, o programa encerra*/
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opção inválida" << endl;
            continue;
        }/*Se o usuário digitar algo inválido, o programa encerra*/
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string estudo = "";
        double horas = 0;

        //Case switch para tratar as diferentes opções do usuário
        switch(option){
            //Case 1: Registrar estudo
                case 1:
                    cout << "REGISTRAR ESTUDO" << endl;
                    cout << "Digite o nome da matéria: " << endl;
                    getline(cin, estudo);
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Nome inválido" << endl;
                        break;
                    }/*Se o usuário digitar algo inválido, o programa encerra*/
                    if(estudo == ""){
                        cout << "Digite um nome válido" << endl;
                        break;
                    }//Se o usuário não digitar nada, o programa encerra
                    cout << "Digite a quantidade de horas que você estudou: " << endl;
                    cin >> horas;
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Quantidade de horas inválida" << endl;
                        break;
                    }/*Se o usuário digitar algo inválido, o programa encerra*/
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    if(horas <= 0){
                        cout << "As horas devem ser maiores que zero" << endl;
                        break;
                    }//Se o usuário digitar algo inválido, o programa encerra
                    registrarEstudo(estudo, horas);
                    break;
                //Case 2: Listar estudos
                case 2:
                    cout << "Lista de estudos" << endl;
                    if(estudos.empty()){
                        cout << "Nenhum estudo registrado" << endl;
                        break;
                    }//Se não houver estudos registrados, o programa encerra
                    for(const auto& item : estudos){
                        cout << "Matéria: " << item.first << " - " << "Tempo: " << item.second << "h" << endl;
                    }//Para cada estudo registrado, exibe a matéria e o tempo de estudo
                    break;
                //Case 0: Sair do programa
                case 0:
                    cout << "Finalizado com sucesso" << endl;
                    executando = false;
                    break;
                default:
                    cout << "Opção inválida" << endl;
                    break;
            }
    }
    
    
    
    return 0;
}
