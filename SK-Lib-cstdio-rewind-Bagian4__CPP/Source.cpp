#pragma warning(disable:4996)

#include <array>
#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::FILE* f = std::fopen("file.txt", "w");
    
    for (char ch = '0'; ch <= '9'; ch++) {
        std::fputc(ch, f);
    }
        
    std::fclose(f);

    std::array<char, 20> str;
    std::FILE* f2 = std::fopen("file.txt", "r");

    const unsigned size1 = std::fread(str.data(), 1, str.size(), f2);
    std::puts(str.data());
    std::printf("size1 = %u\n", size1);

    std::rewind(f2);

    const unsigned size2 = std::fread(str.data(), 1, str.size(), f2);
    std::puts(str.data());
    std::printf("size2 = %u", size2);

    std::fclose(f2);

    _getch();
    return 0;
}