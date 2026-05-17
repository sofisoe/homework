#include <iostream>
#include <string>
#include <array>
#include <vector>


using namespace std;

struct hero_r {
    string name;
};
class hero {
private:
    int health;
    int power;
    string name;
public:
hero(int h, int p, string s) {
    health = h;
    power = p;
    name = s;
    cout << "Constructor called"<< name;
}

    hero() {
    health = 100;
    power = 100;
    name = "Mike";
    cout << "Default constructor called" << name;
}

hero slice() {
    health = health/2;
    power = power/2;
    return *this;
}

void lowerHealth() {
    health -= 10;
}

~hero() {
    cout << "Destructor called"<< name;
}

};
class warrior : hero {
private:
    int power;
    string name;
public:
    
    warrior () {
        name = "Kain";
        power = 200;
    }

    void higherPow () {
        power -= 10;
    }

};

class priest : hero {
private:
    int power;
    string name;
public:
    
    priest () {
        name = "David";
        power = 50;
    }

    void higherPow () {
        power -= 50;
    }

};

/* two-dimens. class
fields - coordinates
methods:
scalar multiplic
vector multip
addition of vect
normalisation

daughter class*/

int main () 
{
    
        hero h1(100, 100, "Hero1");
        hero h2(150, 150, "Hero2");
        hero h3(h2.slice());
    



    hero* h_ptr = new hero();
    delete h_ptr;
// string s1 {"Hello"};
// string s2 {s1 + " ," + "\n"};

// for (int i {0}; i < s2.size(); i++) {
//     cout << i << ' ' << s2[i] << '\n';
// }

// for (auto& c : s2) {

// }
// s2.push_back("o");
// cout << s2.back() << '\n';
// cout << s2.at(0) << '\n';

// getline(cin, s1);

// s1.replace(n, s2.size(), "something");


array<int, 3> arr{1, 2, 3};
vector <int> dyn_arr;
dyn_arr.push_back(arr[0]);
for (auto& a : arr) {
    dyn_arr.push_back(a);

}
for (auto& a : dyn_arr) {
    cout << a;
}

string s1;
string s2;
cin >> s1 >> s2;
cout << s1.at(0) << "." << s2 << endl;

string sentence;
string s3;
cin >> sentence >> s3;

char g = sentence.find(s3);
size_t t = s3.size();
sentence.erase(g, t + 1); 
cout << sentence << endl;


vector<string> set_of_str{};
vector<int> quant;
int d = 0;
string s4;
cin >> d;
for (int i {0}; i < d; i++){
    quant.push_back(0);
}
for (auto& a : quant) {
    cout << "What the object is like?"<< endl;
    getline(cin, s4);
    set_of_str.push_back(s4);
}
for (auto& a : set_of_str) {
    cout << a << " " << a.size() << endl;
}



}