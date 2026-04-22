#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
    int horsepower;

    
    void printInfo() const {
        cout << "Автомобиль: " << brand << " " << model << endl;
        cout << "Год выпуска: " << year << endl;
        cout << "Мощность: " << horsepower << " л.с." << endl;
    }
};

double powerToKW(int hp) {
    return hp * 0.735;
}

int calculateTax(int hp) {
    return hp * 10;
}


int main() {
    setlocale(LC_ALL, "Ru");
    Car myCar;
    myCar.brand = "Lada";
    myCar.model = "Vesta";
    myCar.year = 2023;
    myCar.horsepower = 106;

    myCar.printInfo();
    cout << "Примерный транспортный налог: " << calculateTax(myCar.horsepower) << " руб." << endl;
    cout << "Мощность в киловаттах: " << powerToKW(myCar.horsepower) << " кВт" << endl;
}
