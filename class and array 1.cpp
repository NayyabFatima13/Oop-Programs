#include <iostream>
using namespace std;
class PrimeNumberCounter {
private:
    int arr[10];
public:
    void inputArray() {
        cout << "Enter 10 integers: ";
        for (int i = 0; i < 10; ++i) {
            cin >> arr[i];
        }
    }

    int countPrimes() {
        int count = 0;
        for (int i = 0; i < 10; ++i) {
            if (isPrime(arr[i])) {
                count++;
            }
        }
        return count;
    }
private:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    } };
int main() {
    PrimeNumberCounter counter;
    counter.inputArray();
    int primeCount = counter.countPrimes();
    cout << "Total prime numbers entered: " << primeCount << endl;
    return 0;
}

