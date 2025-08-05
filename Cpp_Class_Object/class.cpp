#include <iostream>


using namespace std;

/// 1 topshiriq

class Student {
private:
    string name;
    int age;
    float grade;
    string school;

public:
    void setDate() {
        cout << "Ismi: ";
        getline(cin, name);

        cout << "Yoshingizni kiriting: ";
        cin >> age;

        cout << "Bahosi (1 - 100): ";
        cin >> grade;

        cin.ignore(); /// Enter di olini oladi

        cout << "Maktabi: ";
        getline(cin, school);


    }

    void display() {
        cout << "\n--- Student Ma’lumotlari ---" << endl;
        cout << "Ism: " << name << endl;
        cout << "Yosh: " << age << endl;
        cout << "Bahosi: " << grade << endl;
        cout << "Maktab: " << school << endl;


        if (grade >= 60 && age >= 0 && age <= 150) {
            cout << "Tabriklaymiz !!! " << endl;
        } else cout << "Tog'ri kelmadingiz" << endl;

    }
};


/// 2 topshiriq


class Car {
private:
    string model;
    int speed;


public:
    void carMethod() {
        cout << "Model nomini kiriting: ";
        getline(cin, model);

        cout << "Tezlgini kiriting";
        cin >> speed;
    }

    void accelerate() {
        if (speed != 0) {
            speed += 10;
            cout << "Tezlik oshirildi. Yangi speed: " << speed << endl;
        } else cout << "Tezlik 0 dan baland bolishi kerak";
    }

    void brake() {
        if (speed >= 10) {
            speed = speed - 10;
            cout << "Tezlik kamaytirildi. Yangi speed: " << speed << endl;
        } else cout << "Tezlik 10 dan baland yoki 10 ga teng bolishi kerak";
    }

    void displaySpeed() {
        cout << "Model" << model << endl;
        cout << "Xozirgi speed" << speed << endl;

    }
};


/// 3 topshiriq

class Product {
private:
    string name;
    int price, quantity;

public:
    void setData() {
        cout << "Mahsulot nomini kiriting: ";
        getline(cin, name);

        cout << "Mahsulot narxini kiriting";
        cin >> price;
        cout << "Mahsulot sonini kiriting";
        cin >> quantity;
    }

    void totalPrice() {
        if (price > 0) {
            price = price * quantity;
            cout << name << " Mahsulot nomi va " << price << " Mahsulotning narhi" << endl;
        } else cout << "Narx 0 dan kata bolishi kerak !!!" << endl;
    }

    void applyDiscount(int discount) {

        if (price > 0) {
            price *= (100 - discount) / 100.0;
            cout << name << " mahsulot nomi va " << price << " mahsulotning chegirmali narxi" << endl;
        } else cout << "Narx 0 dan katta bo‘lishi kerak!" << endl;

    }


    void display() {
        cout << "Mahsulot nomi: " << name << endl;
        cout << "Mahsulot narxi: " << price << endl;
        cout << "Mahsulot soni: " << quantity << endl;
    }


};


int main() {

/// 1 topshiriq
/*
 Student s1;

    cout << "Talaba ma'lumotlarini kiriting !!! \n" << endl;

    s1.setDate();
    s1.display();
 */


/// 2 topshiriq

/*

    Car c1;
    cout << endl;

    c1.carMethod();
    c1.displaySpeed();
    cout << "Brake (-10)" << endl;
    c1.brake();
    cout << endl;
    cout << "accelerate (+10)" << endl;
    c1.accelerate();
    cout << endl;
 */


/// 3 topshiriq

/*
     int discount;

    Product p;

    p.setData();
    p.display();
    p.totalPrice();
    cout << "Chegirma narhini kiriting";
    cin >> discount;
    p.applyDiscount(discount);
 */

/// 4 topshiriq


    return 0;
}



