#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct model {
    char name[32];
    int layers;
    float accuracy;
};



int main() 
{
// ifstream fin("log.txt");
// ofstream fout("errors.txt");
// int counter = 0;

// if (!fin.is_open() || !fout.is_open())
//     return 1;
// string line;
// while(getline(fin, line)) {
//     if (line.find("ERROR") != string::npos) {
//         fout << line << endl;
//         counter += 1;
//     }
//     stringstream ss(line);
//     int a;
//     while (ss >> a) {
//         fout << a << endl;
//     }
// };
// cout << counter;

// fin.close();
// fout.close();

// ifstream fin("nums.txt");
// ofstream fout("info.txt");

// vector <int> num_arr;


// if (!fin.is_open() || !fout.is_open())
//     return 1;
// string line;
// while(getline(fin, line)) {
//     stringstream ss(line);
//     int a;
//     while (ss >> a) {
//         num_arr.push_back(a);
//     }
// };
// int count = 0;
// for (auto& a : num_arr) {
//     count += 1;
// }


// fin.close();
// fout.close();
// model m{"ResNet-50", 50, 0.94f};

// ifstream in("models.bin", ios::binary);
// in.seekg(0, ios::beg);
// in.seekg(2*sizeof(model), ios::beg);
// in.read(reinterpret_cast<char*>(&m), sizeof(model));
// ofstream out("models.bin", ios::binary);


// out.write(reinterpret_cast<char*>(&m), sizeof(model));
// cout << m.name << endl;
// out.close();
// in.close();
// return 0;

cout << "should we make new notes? (1 - yes, 0 - no)" << endl;
int n = 0;
int k = 0;
cin >> n;
if (n == 0) return 1;
model m{"ResNet-50", 50, 0.94f};

ifstream in("models.bin", ios::binary);
cout << "which note to return?" << endl;
cin >> k;


in.seekg(k - 1, ios::beg);
// in.seekg(2*sizeof(model), ios::beg);
in.read(reinterpret_cast<char*>(&m), sizeof(model));
ofstream out("models.bin", ios::binary);


out.write(reinterpret_cast<char*>(&m), sizeof(model));
cout << m.name << endl;
out.close();
in.close();
return 0;
}

// *.csv скачать и *.jpg
// программа склеивает два файла в один бинарный
// прога разделяет бинарный на два файла
// jpg начинаются с ff d8 ff
