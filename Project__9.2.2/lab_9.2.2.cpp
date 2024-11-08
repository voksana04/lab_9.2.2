//#include <iostream>
//#include <cstdarg>
//using namespace std;
//
//
//#define USE_INT
////#define USE_DOUBLE
////#define USE_FLOAT
//
//// Макрос для визначення суми чисел різних типів
//#define SUM_NUMBERS(...) sumNumbers(__VA_ARGS__)
//
//#ifdef USE_INT
//int sumNumbers(int count, ...) {
//    va_list args;
//    va_start(args, count);
//    int sum = 0;
//
//    // Обробка параметрів типу int
//    for (int i = 0; i < count; i++) {
//        int num = va_arg(args, int);
//        sum += num;
//    }
//
//    va_end(args);
//    return sum;
//}
//#elif defined(USE_DOUBLE)
//double sumNumbers(int count, ...) {
//    va_list args;
//    va_start(args, count);
//    double sum = 0;
//
//    // Обробка параметрів типу double
//    for (int i = 0; i < count; i++) {
//        double num = va_arg(args, double);
//        sum += num;
//    }
//
//    va_end(args);
//    return sum;
//}
//#ifdef USE_FLOAT
//float sumNumbers(int count, ...) {
//    va_list args;
//    va_start(args, count);
//    float sum = 0.0f;
//
//    // Обробка параметрів типу float (отримуємо їх як double)
//    for (int i = 0; i < count; i++) {
//        float num = static_cast<float>(va_arg(args, double)); // Отримуємо як double і приводимо до float
//        sum += num;
//    }
//
//    va_end(args);
//    return sum;
//}
//#endif
//
//
//int main() {
//#ifdef USE_INT
//    cout << "Sum of 3 integers: " << SUM_NUMBERS(3, 1, 2, 3) << endl;
//#elif defined(USE_DOUBLE)
//    cout << "Sum of 3 doubles: " << SUM_NUMBERS(3, 1.2, 3.4, 5.6) << endl;
//#elif defined(USE_FLOAT)
//    cout << "Sum of 3 floats: " << SUM_NUMBERS(3, 1.2f, 3.4f, 5.6f) << endl;
//#endif
//
//    return 0;
//}

#include <iostream>
#include <cstdarg>
using namespace std;


#define USE_INT
//#define USE_DOUBLE
//#define USE_FLOAT

#define SUM_NUMBERS(...) sumNumbers(__VA_ARGS__)

#ifdef USE_INT
int sumNumbers(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        sum += num;
    }

    va_end(args);
    return sum;
}
#elif defined(USE_DOUBLE)
double sumNumbers(int count, ...) {
    va_list args;
    va_start(args, count);
    double sum = 0;

    for (int i = 0; i < count; i++) {
        double num = va_arg(args, double);
        sum += num;
    }

    va_end(args);
    return sum;
}
#elif defined(USE_FLOAT)
float sumNumbers(int count, ...) {
    va_list args;
    va_start(args, count);
    float sum = 0.0f;

    for (int i = 0; i < count; i++) {
        float num = static_cast<float>(va_arg(args, double)); 
        sum += num;
    }

    va_end(args);
    return sum;
#endif

    int main() {
#ifdef USE_INT
        cout << "Sum of 3 integers: " << SUM_NUMBERS(3, 1, 2, 3) << endl;
#elif defined(USE_DOUBLE)
        cout << "Sum of 3 doubles: " << SUM_NUMBERS(3, 1.2, 3.4, 5.6) << endl;
#elif defined(USE_FLOAT)
        cout << "Sum of 3 floats: " << SUM_NUMBERS(3, 1.2f, 3.4f, 5.6f) << endl;
#endif

        return 0;
    }
