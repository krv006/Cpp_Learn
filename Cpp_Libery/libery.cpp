#include <iostream>
#include <algorithm>
#include <cmath>

/**
    #include <math.h> -> ni orniga xozirgi kunda
    #include <algorithm>
    #include <cmath>
    SHU IKKTA KUTUBXONA ISHLAYAPDI
*/

using namespace std;

int main() {

    float a, b, c, d;
    cout << "a ni kiriting: ";
    cin >> a;
    cout << "b ni kiriting: ";
    cin >> b;
    cout << "c ni kiriting: ";
    cin >> c;
    cout << "d ni kiriting: ";
    cin >> d;

    cout << endl;

    cout << "Max qiymat -> " << max(max(a, b), max(c, d)) << endl;
    cout << "Min qiymat -> " << min(min(a, b), min(a, b)) << endl;
    cout << "Daraja kotaramiz -> " << pow(a, 2) << endl;

//    a = sqrt(a);
//    a = floor(a);
//    a = ceil(a);
//    cout << "a = " << a << endl;
//    main();

    return 0;
}



/**
    1. abs() -> x sonini absalyut qiymatini chiqazadi ya'ni -1 kiritsam 1 di ozi qaytadi
         manfiy qiymatni yoq qiladi (a = abs(a);)

    2. sqrt() -> ildizdan sondi chiqazadi 81 -> 9 (a = sqrt(a);)

    3. floor() -> sondi yaxlitlaydi ya'ni 3.1 -> 3 , 3.9 -> 3. Yani kichik tomonga qarab qiladi

    4. ceil() -> floor di teskarisi. 4.1 -> 5, 4.9 -> 5

    5. max() -> max sondi topib beradi

    6. max() -> min sondi topib beradi

    7. pow() -> darajaga kotarib beradi
*/