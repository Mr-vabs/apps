
#include <iostream>
using namespace std;
int main() {
    int basicSalary, allowance, totalSalary;
    char grade;
    // cout<<" BS ";
    cin>>basicSalary;
    // cout<<" Gd ";
    cin>>grade;
    if (grade=='a' || grade=='A')
    allowance = 1700;
    else if (grade=='b' || grade=='B')
    allowance = 1500;
    else
    allowance = 1300;
    totalSalary = round(1.59 * basicSalary) + allowance;
    
    cout<<totalSalary;
    return 0;
}
