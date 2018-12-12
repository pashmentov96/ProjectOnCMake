//
// Created by nikita on 12.12.18.
//

#include <iostream>
#include <cstdio>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return 1;
    }
    FILE* ok = freopen(argv[1], "w", stdout);
    if (ok == nullptr) {
        return 1;
    }
    std::cout << "int sum(int a, int b) {" << std::endl;
    std::cout << "\treturn a + b;" << std::endl;
    std::cout << "}";
    return 0;
}