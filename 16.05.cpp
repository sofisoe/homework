#include <iostream>

#include <stdexcept>
using namespace std;

class DSetException: public exception{
    protected:
        string message;
    public:
    DSetException() = default;
    DSetException(string msg): message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class PositiveValExc : public DSetException {
public:
    PositiveValExc(string msg) {
        DSetException(message());
    }
};

class RealHeightExc : public DSetException {
public:
    RealHeightExc(string msg) {
        DSetException(message());
    }
};

void foo(int x) {
    if (x < 0) {
        throw invalid_argument("x is negative\n");
    }
}


int main() {
try {
    foo(-2);
}
catch(const exception& e) {
    cerr << e.what() << '\n';
}

vector<vector<double>> Data {
    {25., 1.8},
    {-5., 1.75},
    {30., 0.}
};


}