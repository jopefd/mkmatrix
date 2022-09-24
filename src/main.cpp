#include <fstream>
#include <iostream>
#include <limits>
#include <random>
#include <string>
#include <vector>

using std::cout;
using std::mt19937;
using std::numeric_limits;
using std::ofstream;
using std::random_device;
using std::stoi;
using std::string;
using std::uniform_int_distribution;
using std::vector;

int GetRandomNumber(const int &limit) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distr(1, limit);
  return distr(gen);
}

vector<int> GenerateRandomNumbers(const int &length) {
  vector<int> numbers;

  int int_max = numeric_limits<int>().max();
  for (int i = 0; i < length; i++) {
    auto n = GetRandomNumber(int_max);
    numbers.push_back(n);
  }

  return numbers;
}

void CreateMatrixFile(const string &matrix_title, const int &m, const int &n) {
  ofstream matrix_file(matrix_title + ".txt");

  for (int i = 0; i < m; i++) {
    auto random_numbers = GenerateRandomNumbers(n);
    for (auto rn : random_numbers) matrix_file << rn << " ";
    matrix_file << "\n";
  }

  matrix_file.close();
}

int main(int argc, char **argv) {
  int m1 = stoi(argv[1]);
  int n1 = stoi(argv[2]);

  CreateMatrixFile("matrix1", m1, n1);
  
  if (argc > 3) { 
    int m2 = stoi(argv[3]);
    int n2 = stoi(argv[4]);
    CreateMatrixFile("matrix2", m2, n2);
  }
}
