# File Encryption and Decryption

## Description
The **File Encryption and Decryption** project is a simple yet effective tool that allows users to encrypt and decrypt files using the XOR encryption method. This application provides a straightforward interface for obfuscating sensitive information, ensuring data confidentiality.

## Features
- 🔒 **File Encryption**: Encrypt files by applying the XOR operation with a user-defined key.
- 🔑 **File Decryption**: Decrypt previously encrypted files using the same key.
- 📂 **User-Friendly Interface**: Command-line interface for easy file handling.
- ⚡ **Fast Processing**: Quick encryption and decryption using a basic but effective algorithm.

## Installation

To set up the project locally, follow these steps:

bash
# Clone the repository
git clone https://github.com/omshete96/File-Encryption-Decryption.git

# Navigate to the project directory
cd File-Encryption-Decryption

# Compile the C++ program (if applicable)
g++ encrypt_decrypt.cpp -o encrypt_decrypt

Usage
Encrypting a File:
Run the program and provide the input file and output file names, along with a single character key for encryption.

Decrypting a File:
Use the same command, providing the encrypted file and the same key used for encryption.
The process for encryption and decryption is the same since the XOR operation is symmetrical.
