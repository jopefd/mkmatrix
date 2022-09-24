# mkmatrix

Utilitário para criar matrizes aleatórias.

## Como utilizá-lo:

Baixe este repositório, entre no seu respectivo diretório e execute:

```sh
mkdir build && cd build && cmake .. && cmake --build .
```

Isso irá compilar o executável mkmatrix. Então, basta informar as linhas e colunas desejadas para a(s) matriz(es). O utilitário suporta até duas:

```sh
./mkmatrix 3 4 # cria uma matriz com 3 colunas e 4 linhas 
```
```sh
./mkmatrix 3 4 1 2 # cria uma matriz com 3 colunas e 4 linhas e outra com 1 coluna e 2 linhas
```
