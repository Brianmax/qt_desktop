#include "QCoreApplication"
#include "iostream"
#include "string"
#include "QTextStream"
#include "include/Counter.h"
using namespace std;
int main(int argc, char *argv[]) {
    Counter a, b;
    QObject::connect(&a, &Counter::valueChanged,
                     &b, &Counter::setValue);
    a.setValue(12);     // a.value() == 12, b.value() == 12
    b.setValue(48);     // a.value() == 12, b.value() == 48
}
