#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {

    std::ifstream file("0059_cipher.txt");
    std::vector<unsigned char> encrypted;
    std::string line;
    while (std::getline(file, line, ',')) {
        unsigned char numero = static_cast<unsigned char>(std::stoi(line));
        encrypted.push_back(numero);
    }
    file.close();
    for (unsigned char i = 'a'; i <= 'z'; i++)
        for (unsigned char j = 'a'; j <= 'z'; j++)
            for (unsigned char k = 'a'; k <= 'z'; k++) {
                unsigned char keys[] = {i, j, k};
                std::string result;
                for (size_t p = 0; p < encrypted.size(); p++)
                    result += (char)(encrypted[p] ^ keys[p % 3]);

                if (result.find(" the ") != std::string::npos) {
                    int answer = 0;
                    for (char ch : result) {
                        answer += (int)ch;
                        std::cout << ch;
                    }
                    std::cout << answer;
                }
            }
}
