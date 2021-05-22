#include <iostream>

int main() {
    bool submarine[] = {1};
    bool destroyer[] = {1, 1};
    bool cruiser[] = {1, 1, 1};
    bool carrier[] = {1, 1, 1, 1};

    std::cout << "Length of submarine \t" << sizeof (submarine) / sizeof submarine[0] << "\n";
    std::cout << "Length of destroyer \t" << sizeof (destroyer) / sizeof destroyer[0] << "\n";
    std::cout << "Length of cruiser \t\t" << sizeof (cruiser) / sizeof cruiser[0] << "\n";
    std::cout << "Length of carrier \t\t" << sizeof (carrier) / sizeof carrier[0] << "\n";

    return 0;
}
