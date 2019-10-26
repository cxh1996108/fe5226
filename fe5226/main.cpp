//
//  main.cpp
//  fe5226
//
//  Created by Xiaoman Li on 12/10/19.
//  Copyright © 2019 Xiaoman Li. All rights reserved.
//

#define _USE_MATH_DEFINES // cause import of some macros like M_PI

#include <stdio.h>
#include <iomanip> // needed to format the output
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <typeinfo>
#include <list>
#include <vector>
#include <exception>
#include <sstream>
#include <set>

using namespace std;

//bool same_parity (int x, int y) {
//    // x and y are passed as copies, changes in the function won't be passed to the main function
//    return ((x % 2) == (y % 2));
//}

void randAB (int n, double *dst, double a, double b) {
    for (unsigned i = 0; i < n; ++i)
        dst[i] = (static_cast<double>(rand())/static_cast<double>(RAND_MAX))*(b - a) + a;
}


struct MyArray {
    const size_t initial_size = 1;
    const size_t growth_factor = 2;

    size_t capacity = initial_size;
    size_t length = 0; // size_t is shortcut for unsigned int?
    
    int *v;
};

int getInteger() {
    int x;
    cout << "Input a number (<0 to terminate the program): " << endl;
    do {
        cin >> x;
    } while (cin.bad());
    return x;
}

void printArray(const MyArray &numbers) {
    for (size_t j = 0; j < numbers.length; ++j)
        cout << numbers.v[j] << ", ";
    cout << endl;
}

template <typename Container>
void print(const Container& c, const string& msg) {
    cout << "Size: " << c.size()
//        << ", Capcaity: " << c.capacity()
        << endl;
    
    
    for (auto it = c.cbegin(); it != c.cend(); ++it) {
        cout << *it << ", ";
    }
    cout << msg << "\n";
}

template <typename T>
const T& i_th_element (const list<T>& l, size_t i) {
    // scope here is used to shorten the lift of the statment, to void mistakes.
    auto it = l.begin();
    size_t j = 0;
    while (j < i) {
        if (it != l.cend()) {
            ++j;
            ++it;
        }
        else {
            cout << "Cannot get the " << i << "th element. This List is too short! " << "\n";
            exit(-1);
        }
    }

    return *it;
}

pair<double, double> roots(double a, double b, double c) {
    double delta = b * b -4.0 * a * c;
    
    if (delta < 0) {
        ostringstream os;
        os << __FILE__ << ": line " // macros
            << __LINE__ << ", " // macros
            << "Negative discriminant " << delta << "\n";
        throw invalid_argument(os.str());
    }
    double disc = sqrt(delta);  // this can cause an error if (delta < 0)
    double a2 = 2 * a;
    return make_pair((-b + disc) / a2, -(b + disc) / a2);
    
}


int main () {
    
//    std::set<int> myset = {10, 20, 30, 40, 50};
//    std::set<int>::iterator it;
//
//    it = myset.find(70);
//    cout << *it << endl;
//    cout << *(myset.end());
//    if (it != myset.end())
//        cout << "Number found" << endl;
//    else
//        cout << "Number not found" << endl;
//
    
    
//    double a = 1, b = 1, c = 1;
//    try {
//        auto res = roots(a, b, c);
//        cout << res.first << res.second << "\n";
//        return 0;
//    }
//    catch (const invalid_argument& e) {
//        cout << e.what() << "\n";
//        return -1;
//    }
//
    
    
//
//    list<int> v(3, 4);
//    print(v, "Create");
//
//    for (auto& x : v) {
//        x = rand() % 10;
//    }
//    print(v, "Rand");
//
//    cout << i_th_element(v, 4);

    
//    vector<int> v;
//    print(v, "Create");
//
//    v.reserve(20);
//    print(v, "Reserved");
//
//    v.assign(20, 5);
//    print(v, "Assigned");
//
//    v.push_back(0);
//    print(v, "Pushed back");
//
//    v.clear();
//    print(v, "Cleared");
//
//
//    v.shrink_to_fit(); // shrink capacity to size of the vector
    
//    MyArray numbers;
//    numbers.v = new int[numbers.capacity];
//    while (true) {
//        int x = getInteger();
//        if (x < 0) {
//            break;
//        }
//        if (numbers.length == numbers.capacity) {
//            int *temp = new int[numbers.capacity*numbers.growth_factor];
//            for (size_t i = 0; i < numbers.length; ++i)
//                temp[i] = numbers.v[i];
//            delete[] numbers.v;
//            numbers.v = temp;
//        }
//        numbers.v[numbers.length++] = x;
//    }
//
//    printArray(numbers);
        
//    struct ComplexNumber {
//        double realpart;
//        double imagpart;
//    };
//
//    ComplexNumber *p = new ComplexNumber[2];
//    p[0] = {1, 2};
//    p[1] = {3, 4};
//    cout << p[0].imagpart << " " << p[1].imagpart << endl;
//
//    delete [] p;
//
    
    
    
    
//    const char x[] = {'H', 'e', 'l', 'l', 'o', 0};
//    const char y[] = "Hello";
//    cout << sizeof(y)<< endl; // output 6
//
    
    
//    double x[10];
//    randAB (10, x, 1, 5);
//
//    for (unsigned i = 0; i < 10; ++i) {
//        cout << x[i] << endl;
//    }
//
    
    
//    const unsigned nPoints = 10;
//    double step = M_PI / nPoints; // here nPoints is lifted to double
//    for (unsigned i = 0; i < 2*nPoints; ++i) {
//        double x = i*step;
//        cout << fixed << setprecision(3)
//        << setw(8) << x << ", "
//        << setw(8) << sin(x)*cos(x)
//        << "\n";
//    }
//    cout << "\n";



//
//struct MyArray {
//    const size_t initial_size = 1;
//    const size_t growth_factor = 2;
//
//    size_t capacity = initial_size;
//    size_t length = 0; // size_t is shortcut for unsigned int?
//
//    int *v;
//};
//
//int main () {
//
//    int x;
//
//    MyArray numbers;
//    numbers.v = new int[numbers.capacity];
//
//    while (true) {
//        cout << "Input a number (<0 to terminate the program): " << endl;
//        cin >> x;
//        if (x < 0)
//            break;
//
//        if (numbers.length == numbers.capacity) {
//            int *temp = new int[numbers.capacity*numbers.growth_factor];
//            for (size_t i = 0; i < numbers.length; ++i)
//                temp[i] = numbers.v[i];
//            delete[] numbers.v;
//            numbers.v = temp;
//        }
//        numbers.v[numbers.length++] = x;
//    }
//
//    for (size_t j = 0; j < numbers.length; ++j)
//        cout << numbers.v[j] << ", ";
//    cout << endl;

    
//    const char *msg[] = {"hello", "world"};
//    // initialized an array of points that are pointing to a character array
//    cout << msg[1] << endl;
    
    
//    int x[5] = {1,2,3,4,5};
//    int *y = x; // pointer pointing to the first element of the array
//    // int *y = NULL； is OK，but int *y; is not a good practice
//
//    cout << "Size of x: " << sizeof(x) << endl;
//    cout << "Size of y: " << sizeof(y) << endl;
//
//    for (int i = 0; i < 5; i++) {
//        cout << x[i] << " " << y[i] << endl;
//    }
//
//    y = x + 1;
//
//    for (int i = 0; i < 5; i++) {
//        cout << x[i] << " " << y[i] << endl;
//    }
//    cout << *(x + 1) << endl;
//    cout << (x + 2)[-1] << endl;
//
//
//    y[2] = 0;
//
//    for (int i = 0; i < 5; i++) {
//        cout << x[i] << " " << y[i] << endl;
//    }
//
//    for (int *y = x; y != x + 5;) {
//        cout << *++y << endl; // should pay attention to ++*y, *++y, *y++
//    }
    

    
    
    
//    // find all prime numbers
//    unsigned primes[80];
//
//    unsigned nPrimesFound = 0;
//    unsigned upperBound = 100;
//
//    for (int i = 2; i < upperBound; i++) {
//        unsigned largest = static_cast<unsigned>(sqrt(static_cast<double>(i)));
//        bool isPrime = true;
//        for (unsigned j = 0; j < nPrimesFound; j++) {
//            if (primes[j] > largest)
//                break;
//            if (i % primes[j] == 0) {
//                isPrime = false;
//                break;
//            }
//        }
//        if (isPrime)
//            primes[nPrimesFound++] = i;
//    }
//
//    for (unsigned i = 0; i < nPrimesFound ; i++) {
//        cout << primes[i] << " ";
//    }
    
    
    
    
    
    
    
//    // check minimum, maximum and average of an array
//    const unsigned n = 100;
//    double x[n];
//
//    for (int i = 0; i < 100; i++) {
//        x[i] = rand();
//    }
//
//    double mi = x[0], ma = x[0], ave = x[0];
//
//    for (int i = 1; i < 100; i++) {
//        if (x[i] < mi)
//            mi = x[i];
//        if (x[i] > ma)
//            ma = x[i];
//        ave += x[i];
//    }
//    ave /= n;
//    cout << "The minimum is: " << mi << endl;
//    cout << "The maximum is: " << ma << endl;
//    cout << "The average is: " << ave << endl;
    
    
    
    
//    int x[] = {1, 2, 3, 4, 5, 6, 7, 8};
//    cout << "Size of the array " << sizeof(x) << endl; //return the number of bytes in memory taken by the variable
//    const unsigned length = sizeof(x) / sizeof(x[0]); // number of elements in the array
//    cout << length << endl;
//
//    for (int i = 0; i < length; i++) {
//        cout << x[i] << "\n";
//    }
//
//    // another way to iterate over an array, useful in the case index info is not available
//    int j = 0;
//    for (auto xi : x) {
//        cout << j << "  : " << xi << endl;
//        j++;
//    }
    
    
//    int x;
//    cin >> x;
//    bool isPrime = x != 1;
//    for (int i = 2; i < x; i ++) // can check i < (int) sqrt(x) to save computation time
//        if (x % i == 0) {
//            isPrime = false;
//            break;
//        }
//
//    cout << "The number " << x << " is " << (isPrime ? "" : "not") << " prime. \n";
    
    
    
    
// Practice to sum up all the digits of the inputted number.
//    int x, sum = 0;
//    cout << "Please input a number: ";
//    cin >> x;
//    do {
//        sum += x % 10;
//        x /= 10;
//    }while(x > 0);
//    cout << "Sum of digits = " << sum << "\n";
    
//    int x;
//    cout << "Please input a number: \n";
//    bool ok = (bool)(cin >> x); // (bool) is explicit cast here
//    if (ok) {
//        cout << "Number inputted \n" ;
//    }
    
    
    
//    char c1 = 72, c2 = 'e', c3 = 'e', c4 = 111; // only single quote allowed for character
//    int x, y;
//    cin >> x >> y;
//    cout << x++ << endl; // print x and then assign x = x + 1
//    cout << ++y << endl; // assign y = y + 1 and then print y
    
//    bool y = (1000 < x) && (x <= 10000)
//                        && ((x % 2) != 0)
//                        && ((x % 7) == 0)
//                        && (((x % 41) == 0) || ((x % 43) == 0));
    
    
#if 0
    double xa, xb, ya, yb;
    
    cout << "Enter xa: ";
    cin >> xa;
    
    cout << "Enter ya: ";
    cin >> ya;
    
    cout << "Enter xb: ";
    cin >> xb;
    
    cout << "Enter yb: ";
    cin >> yb;
    
    double dx = xa - xb;
    double dy = ya - yb;
    cout << "The distance is: "
         << sqrt(pow(dx, 2) + dy*dy)
         << endl;
    // pow() is quite expensive and costly, not suggested if the expression is simple.
#endif
    
    
    return 0;
}

