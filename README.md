# 📓 Diário de Estudos em C++ (C++ Study Journal)

**Autor:** Alef Santos Viana  
**Data:** 17/11/2026  
**Versão:** 1.0.1  

> *[Read the English version below](#-english-version)*

Um programa de terminal desenvolvido em C++ para registrar e monitorar quanto tempo você dedicou aos estudos em cada matéria.

## ⚙️ Funcionalidades
- Registrar horas de estudo por matéria (as horas se somam automaticamente).
- Listar o total de tempo estudado em cada matéria.
- Validação contra entradas inválidas pelo usuário.
- Salvamento automático em `estudos.txt` a cada estudo registrado.
- Carregamento automático do arquivo ao iniciar; linhas com formato inválido são ignoradas com um aviso no terminal.

## 🚀 Como compilar e rodar

Certifique-se de ter um compilador C++ (como o G++) instalado. No terminal, execute:

```bash
g++ -std=c++17 -Wall -Wextra -o main main.cpp
./main
```

O arquivo `estudos.txt` é criado na pasta atual na primeira vez que você registrar um estudo.

## 💾 Formato do arquivo

Cada linha segue o padrão `<horas>h;<matéria>`:

```
2h;C++
1.5h;Matemática
```

## 🧾 Menu
- `1` Registrar Estudo
- `2` Listar Estudos
- `0` Sair (o programa também encerra com `Ctrl+D`)

## 🧠 O que pratiquei
- `map`, `string` e funções
- Leitura de entrada com `cin` e `getline`
- Tratamento de erros de entrada e conversão com `stod`
- Leitura e escrita de arquivos com `ifstream` e `ofstream`

---

# 📓 English Version

**Author:** Alef Santos Viana  
**Date:** 17/11/2026  
**Version:** 1.0.1  

A terminal program written in C++ to log and track how much time you spent studying each subject.

## ⚙️ Features
- Log study hours per subject (hours add up automatically).
- List the total time studied per subject.
- Validate invalid user input.
- Automatically save to `estudos.txt` on every logged study.
- Automatically load the file on startup; malformed lines are skipped with a warning in the terminal.

## 🚀 How to compile and run

Make sure you have a C++ compiler (such as G++) installed. In the terminal, run:

```bash
g++ -std=c++17 -Wall -Wextra -o main main.cpp
./main
```

The `estudos.txt` file is created in the current folder the first time you log a study.

## 💾 File format

Each line follows the `<hours>h;<subject>` pattern:

```
2h;C++
1.5h;Math
```

## 🧾 Menu
- `1` Log Study
- `2` List Studies
- `0` Exit (the program also exits on `Ctrl+D`)

## 🧠 What I practiced
- `map`, `string` and functions
- Reading input with `cin` and `getline`
- Handling input errors and parsing with `stod`
- Reading and writing files with `ifstream` and `ofstream`
