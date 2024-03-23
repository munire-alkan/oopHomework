#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class NumberArray {
private:
    float* array;
    int size;

public:
    // Constructor
    NumberArray(int size) {
        this->size = size;
        array = new float[size];
    }

    // Destructor
    ~NumberArray() {
        delete[] array;
    }

    // Store a number in any element of the array
    void setNumber(int index, float number) {
        if (index >= 0 && index < size) {
            array[index] = number;
        } else {
            cerr << "Index out of range" << endl;
        }
    }

    // Retrieve a number from any element of the array
    float getNumber(int index) const {
        if (index >= 0 && index < size) {
            return array[index];
        } else {
            cerr << "Index out of range" << endl;
            return 0;
        }
    }

    // Return the highest value stored in the array
    float getMax() const {
        return *max_element(array, array + size);
    }

    // Return the lowest value stored in the array
    float getMin() const {
        return *min_element(array, array + size);
    }

    // Return the average of all the numbers stored in the array
    float getAverage() const {
        float sum = accumulate(array, array + size, 0.0f);
        return size ? (sum / size) : 0;
    }
};

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    NumberArray numbers(size); // Create an array of specified size

    // Input numbers from the user
    float number;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        numbers.setNumber(i, number);
    }

    // Demonstrate the functionality
    cout << "Highest number: " << numbers.getMax() << endl;
    cout << "Lowest number: " << numbers.getMin() << endl;
    cout << "Average of numbers: " << numbers.getAverage() << endl;

return 0;
}
