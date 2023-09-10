#include <iostream>

using namespace std;

float WeightedAverage(float x[], float w[], size_t l) {
    float a = 0.0;
    float b = 0.0;

    for(int i=0; i<l; i++) {
        a+= x[i] * w[i];
        b+= w[i];
    
    }

    return a / b;
}

int main() {
    float a[] = {2.0, 3.0, 4.0, 5.0};
    float b[] = {0.2, 0.3, 0.4, 0.5};

    int l = sizeof(a) / sizeof(float);

    float c = WeightedAverage(a, b, l);

    cout << "the weighted average is " << c << endl;

    return 1;
}