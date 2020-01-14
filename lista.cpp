#include "lista.h"

void Lista::mostrarTarefas(){
    for(int i=0;i<lista.size();i++){
        cout << "   Descricao : " << lista[i].getDescricao();
        cout << "   Prioridade : "<< lista[i].getPrioridade();
        cout << "   Status : "<< lista[i].getStatus() << endl;
    }
}

void Lista::adicionarTarefa(Tarefa t){
    lista.push_back(t);
}

void Lista::removerTarefa(string d){
    for (int i = 0;i < lista.size(); i++){
        if (d == lista[i].getDescricao()){
            lista.erase(lista.begin()+i);
        }
    }
}

void Lista::mudarStatus(string d){
    for (int i = 0;i < lista.size(); i++){
        if(lista[i].getDescricao() == d){
            if(lista[i].getStatus() == "Completo"){
                lista[i].setStatus(0);
            }else{
                lista[i].setStatus(1);
            }
        }
    }
}


int Lista::size(){
    return lista.size();
}

bool ordenarPorDescricao(Tarefa a, Tarefa b){
    return a.getDescricao() < b.getDescricao();
}

void Lista::mostrarTarefasPorDescricao(){
    sort(lista.begin(),lista.end(),ordenarPorDescricao);
    for(int i=0;i<lista.size();i++){
        cout << "   " << lista[i].getDescricao();
        cout << "   " << lista[i].getPrioridade();
        cout << "   " << lista[i].getStatus() << endl;
    }    
}

string ordenarPorPrioridade(string priori){
    return priori;
}

void Lista::mostrarTarefasPorPrioridade(){
    for(int i=0;i<lista.size();i++){
        if (lista[i].getPrioridade() == "alto"){
            cout << "   " << lista[i].getDescricao();
            cout << "   " << lista[i].getPrioridade();
            cout << "   " << lista[i].getStatus() << endl;
        }
    }

    for(int i=0;i<lista.size();i++){
        if (lista[i].getPrioridade() == "medio"){
            cout << "   " << lista[i].getDescricao();
            cout << "   " << lista[i].getPrioridade();
            cout << "   " << lista[i].getStatus() << endl;
        }
    }

    for(int i=0;i<lista.size();i++){
        if (lista[i].getPrioridade() == "baixo"){
            cout << "   " << lista[i].getDescricao();
            cout << "   " << lista[i].getPrioridade();
            cout << "   " << lista[i].getStatus() << endl;
        }
    }
}

void Lista::mostrarTarefasPorStatus(){
    for(int i=0;i<lista.size();i++){
        if (lista[i].getStatus() == "Completo!"){
            cout << "   " << lista[i].getDescricao();
            cout << "   " << lista[i].getPrioridade();
            cout << "   " << lista[i].getStatus() << endl;
        }
    }

    for(int i=0;i<lista.size();i++){
        if (lista[i].getStatus() == "Incompleto!"){
            cout << "   " << lista[i].getDescricao();
            cout << "   " << lista[i].getPrioridade();
            cout << "   " << lista[i].getStatus() << endl;
        }
    }

}