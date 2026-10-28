#include <iostream>
using namespace std;

struct strAgeAndDriverLicense
{
    int Age;
    bool DriverLicense;
};

void ReadAgeAndDriverLicense(strAgeAndDriverLicense& AgeAndDriverLicense) {
    cout << "Enter Your Age: "; cin >> AgeAndDriverLicense.Age; cout << endl;
    cout << "Has Driver License? enter 1 or 0: "; cin >> AgeAndDriverLicense.DriverLicense; cout << endl;
};

void PrintAgeAndDriverLicense(strAgeAndDriverLicense AgeAndDriverLicense) {
    if (AgeAndDriverLicense.Age > 21 && AgeAndDriverLicense.DriverLicense) {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    };
}

void ReadPersonsAgeAndDriverLicense(strAgeAndDriverLicense PersonAgeAndDriverLicense[2]) {
    ReadAgeAndDriverLicense(PersonAgeAndDriverLicense[0]);
    ReadAgeAndDriverLicense(PersonAgeAndDriverLicense[1]);
}

void PrintPersonsAgeAndDriverLicense(strAgeAndDriverLicense PersonAgeAndDriverLicense[2])
{
    PrintAgeAndDriverLicense(PersonAgeAndDriverLicense[0]);
    PrintAgeAndDriverLicense(PersonAgeAndDriverLicense[1]);
}


int main()
{
    strAgeAndDriverLicense PersonAgeAndDriverLicense[2];
    ReadPersonsAgeAndDriverLicense(PersonAgeAndDriverLicense);
    PrintPersonsAgeAndDriverLicense(PersonAgeAndDriverLicense);

}