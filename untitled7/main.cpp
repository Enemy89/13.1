#include <iostream>
#include <vector>

int vecSize, num, delNum;
int count=0;

int main() {

    std::cout << "Enter vector size" << std::endl;
    std::cin >> vecSize;

    std::vector<int> vec(vecSize);

    for (int i = 0; i < vecSize; i++) {
        std::cout << "Enter number" << std::endl;
        std::cin >> num;
        vec[i] = num;
    }

    std::cout << "Enter delete number" << std::endl;
    std::cin >> delNum;

    for (int i = 0; i < vecSize; i++) {
        if (vec[i] == delNum) {
            count = 1;
            vec.push_back(vec[i]);
        }

        if (count == 1) {
            if (i != vec.size()) {
                for (int j = i; j < vecSize; j++) {
                    vec[j] = vec[j + 1];
                }
                vec.resize(vec.size() - 1);
            }
            count=0;
        }
    }

    for (int i = 0; i < vecSize; i++) {
        if (vec[i] == delNum) {
            vec.resize(vec.size() - 1);
        }
    }//почему этот кусок не "добивает" остатки удаляемых элементов в конце??

    for (int i = 0; i < vecSize - 1; ++i) {
        std::cout << vec[i] << " ";
    }
}
