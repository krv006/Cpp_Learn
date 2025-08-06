#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

/*
     vector<int> juft;
    vector<int> toq;

    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            juft.push_back(i);
        } else toq.push_back(i);

    }

    for (int son: juft) {
        cout << son << ", ";
    }
    cout << "JUFT SON" << endl;
    for (int son: toq) {
        cout << son << ", ";
    }
    cout << "TOQ SON" << endl;

 */

/*
     int s = 0;
    for (int i = 0; i <= 6; i++) {
        if (i % 2 == 1) {
            s += i;
        }
    }

    cout << "Toq sonlar yigindisi: " << s;

 */


/*
     string s = "asal";
    int count = 0;

    for(int i=0;i < s.length(); i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    cout << count << endl;

 */

/*
     int n;
    cout << "A: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Tub son emas." << endl;
            return 0;
        }
    }

    cout << "Tub son." << endl;

 */

/*

    string s = "Kamron";

    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
    }

*/

/*
    int a;
    cout << "a ";
    cin >> a;
    cout << "Natija-> " << boolalpha << (a > 9 && a <= 99 && a % 2 == 1) << endl;

 */
/*
    int a, b;
    cout << "a ";
    cin >> a;
    cout << "b ";
    cin >> b;
    cout << "Natija-> " << boolalpha << (a > 0 && b < 0 || a < 0 && b > 0) << endl;

 */



/*

    int a, b, c;
    cout << "a ";
    cin >> a;
    cout << "b ";
    cin >> b;
    cout << "c ";
    cin >> c;
    cout << "Natija-> " << boolalpha << (a != b && b != c && c != a) << endl;

 */

    string s = "Hello, World!";

    cout << "Uzunligi: " << s.length() << endl;
    cout << "Substring (0-5): " << s.substr(0, 5) << endl;
    cout << "'World' so'zining indeksi: " << s.find("World") << endl;

    s.replace(7, 5, "C++");
    cout << "Almashtirilgan: " << s << endl;

    s.insert(0, "Salom, ");
    cout << "Insert qilingan: " << s << endl;



    return 0;

}