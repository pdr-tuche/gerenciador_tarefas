#include "tarefa.h"


bool Tarefa::setDescricao(string d){
  if(d.size()>3){
    descricao = d;
    return true;
  }
  else{
    descricao = "NADA";
    return false;
  }
}

bool Tarefa::setPrioridade(string p){
  if(p == "baixo" or p == "medio" or p == "alto"){
    prioridade = p;
    return true;
  } else{
    prioridade = "NENHUMA";
    return false;
  }

}

string Tarefa::getDescricao(){
  return descricao;
}

string Tarefa::getPrioridade(){
  return prioridade;
}

void Tarefa::setStatus(bool b){
  status = b;
}

string Tarefa::getStatus(){
  if (status){
    return "Completo!";
  } else {
    return "Incompleto!";
  }
}

void Tarefa::obterTarefa(){
    string temp;
    bool temp2;
    cout << "Descricao da tarefa:" << endl;
    cin >> temp;
    setDescricao(temp);
    
    cout << "Prioridade da tarefa: "<< endl;
    cin >> temp;
    setPrioridade(temp);

    cout << "Tarefa efetuada: "<<endl;
    cin >> temp2;
    setStatus(temp2);

}

