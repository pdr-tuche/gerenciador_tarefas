#include <iostream>
#include "lista.h"

using namespace std;

int main (){
    int opcao=0;
    string temp2;
    Lista objeto;
    Tarefa temp;

    do{
        cout << "Informe a sua opção: " << endl;
        cout << "                  1 - Adicionar tarefa\n \
                 2 - Mostrar tarefas\n \
                 3 - Mostrar tarefas por descrição\n \
                 4 - Mostrar tarefas por prioridade\n \
                 5 - Mostrar tarefas por status\n \
                 6 - Alterar status da tarefa\n \
                 7 - Remover tarefa\n \
                 8 - Sair\n";
                 cin >> opcao;
                 switch (opcao){
                    case 1:            
                    temp.obterTarefa();
                    objeto.adicionarTarefa(temp);
                    break;
                case 2:
                    objeto.mostrarTarefas();
                    break;
                case 3:
                    objeto.mostrarTarefasPorDescricao();
                    break;
                case 4:
                    objeto.mostrarTarefasPorPrioridade();
                    break;
                case 5:
                    objeto.mostrarTarefasPorStatus();
                    break;
                case 6:
                    cout << "qual tarefa mudar? :"<<endl;
                    cin >> temp2;
                    objeto.mudarStatus(temp2);
                    break;
                case 7:
                    cout << "Digite a tarefa que deseja remover" << endl;
                    cin >> temp2;
                    objeto.removerTarefa(temp2);
                    break;
    }
    }while (opcao!= 8);

    
    
    return 0;
}



