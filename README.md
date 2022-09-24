# mkmatrix

Utilitário para criar matrizes aleatórias.

## Como utilizá-lo:

Baixe este repositório, entre no seu respectivo diretório e execute:

```sh
mkdir build && cd build && cmake .. && cmake --build .
```

Isso irá compilar o executável mkmatrix. Então, basta informar as linhas e colunas desejadas para a(s) matriz(es). O utilitário suporta até duas:

```sh
./mkmatrix 4 3 # cria uma matriz com 4 linhas e 3 colunas 
```
```sh
./mkmatrix 4 3 2 1 # cria uma matriz com 4 linhas e 3 colunas e outra com 2 linhas e 1 coluna
```
