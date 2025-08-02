#include <iostream>

using namespace std;

/// 18 topshiriq

void sec_min(int n) {
    int h = n / 3600;
    int s = (n / 3600) % 60;
    cout << h << " soat " << s << " minut" << endl;
}

/// 19 topshiriq

void change_number(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << "->A, " << b << "->B" << endl;
}

/// 23 topshiriq

void distance(int n, int s) {

}



/// 26 topshiriq

void change_hours(float a) {
    cout << a / 3600 << " soat" << endl;
}


int main() {
    // 10 topshiriq

    /*
    int a;
    cout << "a ni kiriting: ";
    cin>>a;


    double b = a*a;
    double c = b*b;
    double d = b*b;
    double a7 = a*d;

    cout << "a ni 7 chi darajasi: "<< a7 << endl;
     */

    // 11 topshiriq

/*
    float l;

    cout << "l= ";
    cin>>l;

    if(l>=100){
        cout << l/100 <<" -> shuncha metr"<<endl;
    }else{
        cout<<"A 100 dan katta bolishi kerak"<<endl;
    }

*/


    // 12 topshiriq

/*
     int a;
    cout << "a ";
    cin>>a;

    if(a>=100){
        double c = (a/100)%10;
        cout << c << " 100 lar xonasidagi son"<<endl;
    }else{
        cout << "a soni 3 xonali bolishi kerak"<<endl;
    }

 */


    // 13 topshiriq

    /*
     int a;
    cout << "a-> ";
    cin>>a;

    cout << endl;

    if(a>=100){
        double first = a / 100;
        double last_two = a % 100;
        double new_number = last_two * 10 + first;

        cout << "1 chi son" << first << endl;
        cout << "Oxirgi 2 ta son" << last_two << endl;
        cout << "Yangi son" << new_number << endl;

    }else{
        cout << "3 xonali son bolishi kerak"<<endl;
    }
     */

    // 14 topshiriq

/*
     int a;
    cout <<"a-> ";
    cin>>a;

    cout << endl;

    double r1=a%10;
    double r10=(a/10)%10;
    double r100=(a/100)%10;
    cout << r1 << r10 << r100 << " -> teskari son"<<endl;

 */

    // 15 topshiriq
/*
     int a;
    cout <<"a-> ";
    cin>>a;

    cout << endl;

    double r1=a%10;
    double r10=(a/10)%10;
    double r100=(a/100)%10;
    double r1000=(a/1000)%10;

    cout <<(r1*r10) + (r100*r1000) << " -> 4 xonali son raqamlar kopaytmasi"<<endl;

 */

    // 16 topshiriq

    /*
     int a;
    cout <<"a-> ";
    cin>>a;

    cout << endl;

    double r1=a%10;
    double r10=(a/10)%10;
    double r100=(a/100)%10;
    cout << r1 + r10 + r100 << " -> 3 xonali son raqamlar yigindisi12"<<endl;

     */

    // 18 topshiriq

/*
     int secund;
    cout << "sec: ";
    cin>>secund;

    sec_min(secund);
 */

    // 19 topshiriq
/*
     int a, b;
    cout << "A-> ";
    cin >> a;
    cout << "B-> ";
    cin >> b;

    cout << endl;
    change_number(a, b);
 */

    // 20 topshiriq

/*
     int a;
    cout << "a=";
    cin>>a;
    cout<<endl;
    if(a>999){
        double r100 = (a/100)%10;
        cout << r100 << " <- 100 lik xonasidagi son"<<endl;
    }else{
        cout << "XATO"<<endl;
    }
 */

    // 21 topshiriq

/*
     int a;
    cout << "a ";
    cin >> a;
    double first = a / 100;
    double last_two = a % 100;
    cout << last_two << first << " -> javobi"<<endl;
 */



    // 22 topshiriq

/*
     int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << endl;

    a = a * 1440;
    b = b * 60;
    double c = a + b;
    cout << c << " -- min" << endl;
 */

    // 23 topshiriq

    /*
    int s;
    int n = 7;

    cout << endl;

    cout << "s: ";
    cin >> s;
    cout << "1 soatda 7km bosib otadi ";
    cout << endl;

    cout << s / n << " soatda " << s << " km di bosib otadi " << endl;
     */

    // 24 topshiriq

/*
     int a, b;
    cout << "Haftani kiriting: ";
    cin >> a;
    cout << "Sutkani kiriting: ";
    cin >> b;
    cout << endl;
    a = 1 * 7;
    cout << (a + b) * 24 << " <-" << endl;
 */

    // 26 topshiriq

    /*
     float a;
    cout << "a: ";
    cin >> a;
    change_hours(a);
     */


    // 28 topshiriq

/*
     int a, r1, r10, r100;
    cout << "a: ";
    cin >> a;

    if (a <= 999) {
        r1 = a % 10;
        r10 = (a / 10) % 10;
        r100 = (a / 100) % 10;

        cout << (r1 * r10) * r100 << " -> sonlar kopaytmasi" << endl;

    } else cout << " 3 xonali son yoz ";

 */






    return 0;

}