// Justin Ventura

#include <iostream>

struct int_list {
    int size;
    int cap;
    int* list;
};

void concat(int_list& L1, int_list& L2) {

    int new_size = L1.size + L2.size;
    int new_cap = new_size;
    int *new_list = new int[new_cap];

    int i, j;
    for (i = 0; i < L1.size; i++) {
        new_list[i] = L1.list[i];
    }
    for (j = 0; j < new_size; j++) {
        new_list[i++] = L2.list[j];
    }

    std::cout << "hi\n";

    delete [] L1.list;
    L1.list = new_list;
    L1.size = new_size;
    L2.cap = new_cap;

}

int main(int argc, char**argv) {

    int *arr1 = new int[5];
    int *arr2 = new int[2];
    arr1[0] = 0;
    arr1[1] = 1;
    arr1[2] = 2;
    arr1[3] = 3;

    arr2[0] = 4;
    arr2[1] = 5;

    int_list L1;
    L1.list = arr1;
    L1.size = 4;
    L1.cap = 4;

    int_list L2;
    L2.list = arr2;
    L2.size = 2;
    L2.cap = 2;

    std::cout << "bruh1\n";
    concat(L1, L2);
    std::cout << "bruh2\n";

    for (int i = 0; i < L1.size; i++) {
        std::cout << L1.list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}