#include "cstrings.h"

int main() {
    while (true) {
        std::string seq ;

        getline(std::cin, seq);
        std::cout  << PrettyPrint(seq) << std::endl;
    }
}