#include <iostream>

int main() {
    int numbers[] = {-2,1,-3,4,-1,2,1,-5,4};
    int sum, newSum = 0, start, finish;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]) - 1; i++) {
        sum = numbers[i];
        for (int j = i + 1; j < sizeof(numbers)/sizeof(numbers[0]); j++) {
            sum += numbers[j];
            if (sum > newSum) {
                start = i;
                finish = j;
                newSum = sum;
            }
        }
    }
    std::cout << start << " " << finish << " " << newSum;
    return 0;
}
