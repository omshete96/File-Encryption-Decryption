#include <iostream>
#include <fstream>
#include <string>

// Function to encrypt or decrypt the file
void encryptDecrypt(const std::string& inputFile, const std::string& outputFile, char key) {
    std::ifstream fin(inputFile, std::ios::binary);  // Input file stream (binary mode)
    std::ofstream fout(outputFile, std::ios::binary); // Output file stream (binary mode)

    // Check if input file can be opened
    if (!fin) {
        std::cerr << "Error: Could not open input file: " << inputFile << std::endl;
        return;
    }

    // Check if output file can be created
    if (!fout) {
        std::cerr << "Error: Could not create output file: " << outputFile << std::endl;
        return;
    }

    char ch;
    while (fin.get(ch)) {  // Read each character from the input file
        ch ^= key;         // Apply XOR with the key to encrypt/decrypt
        fout.put(ch);      // Write the modified character to the output file
    }

    // Close input and output files
    fin.close();
    fout.close();

    std::cout << "Operation completed successfully!" << std::endl;
}

int main() {
    std::string inputFile, outputFile;
    char key;

    std::cout << "Enter input file path (with extension): ";
    std::cin >> inputFile;

    std::cout << "Enter output file path (with extension): ";
    std::cin >> outputFile;

    std::cout << "Enter encryption key (single character): ";
    std::cin >> key;

    std::cout << "Processing..." << std::endl;
    encryptDecrypt(inputFile, outputFile, key);

    return 0;
}
