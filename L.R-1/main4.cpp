#include <iostream>
#include <limits>

int main() {
    long long number = 1;

    // Використання циклу do while
    do {
        std::cout << number << std::endl;
        number *= 2;
    } while (number > 0 && number < std::numeric_limits<long long>::max());

    return 0;
}

// циклу не буде завершення, тому запустіть його обережно. У реальних програмах використання безкінечних циклів потрібно контролювати.