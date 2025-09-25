#include <iostream>
using namespace std;

class Printer {
public:
    void print_document() {
        cout << "Printing document...\n";
    }
};

class Scanner {
public:
    void scan_document() {
        cout << "Scanning document...\n";
    }
};

class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        cout << "Photocopying...\n";
        print_document();
        scan_document();
    }
};

