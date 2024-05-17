#include <iostream>
 using namespace std;

 int main()
 {
    double sales = 95000;
    cout << "sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "state Tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "county Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout <<"Total Tax: $" << totalTax;
        return 0;

 }