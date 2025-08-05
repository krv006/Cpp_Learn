#include <iostream>


using namespace std;

class Car {
public:
    string model;
    int year;

    void display() {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Student {
private:
    int age;

public:
    string name;
    void setAge(int a) {
        if (a > 0 && a < 150) {
            age = a;
        } else {
            cout << "Yosh noto‘g‘ri kiritilgan!" << endl;
        }
    }

    void getAge() {
        cout << "Yosh: " << age << endl;
        cout << "Ismi: " << name << endl;
    }
};

int main() {

/*
     Car c1;

    cout << "Moshining modeilini kiriting: ";
    cin >> c1.model;

    cout << "Moshining yilini kiriting: ";
    cin >> c1.year;

    c1.display();

 */

    Student s1;

    int yosh;
    cout << "Yoshingizni kiriting: ";
    cin >> yosh;


    string name;
    cout << "Ismingizni kiriting: ";
    cin >> name;

    s1.setAge(yosh);
    s1.getAge();

    return 0;
}



/**
 Public bn Private ni farqi
 Publicda s1.name yokida boshqa bir object lani chaqirib ishlata ololamiz
 Private da s1.age bu strukturada yoza olmisan yani tashqaridan ulanish olingan boladi
  */
