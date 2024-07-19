#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("PTIT.in");  // Mở tệp đầu vào để đọc
    std::ofstream outputFile("PTIT.out");  // Mở tệp đầu ra để ghi

    // Kiểm tra xem tệp đầu vào có mở thành công không
    if (!inputFile) {
        std::cerr << "Không thể mở tệp PTIT.in" << std::endl;
        return 1;
    }

    // Kiểm tra xem tệp đầu ra có mở thành công không
    if (!outputFile) {
        std::cerr << "Không thể mở tệp PTIT.out" << std::endl;
        return 1;
    }

    std::string line;
    // Đọc từng dòng từ tệp đầu vào và ghi nó vào tệp đầu ra
    while (std::getline(inputFile, line)) {
        outputFile << line << std::endl;
    }

    // Đóng các tệp
    inputFile.close();
    outputFile.close();

    return 0;
}
