#include <iostream>
#include <fstream>
using namespace std;
string code{
R"(
/*
The gnu multiprecision library allows computations on extra big numbers.
*/

int main(){
    mpz_class a("0");
    mpz_class b("1");
    mpz_class temp("0");
    for(int i=0;i<120;++i){
        temp = b;
        b = b + a;
        a = temp;
        cout << setw(3)<< i<< " : " << a <<endl;
    }
    return 0;
}
)"
};
int main() {
    ofstream file1("gmpdemo.cpp");
    file1<<code;
    file1.close();
    system("g++ -O0 -o gmpdemo gmpdemo.cpp -lgmpxx -lgmp");
    system("./gmpdemo");
    return 0;
}
