#include <iostream>
int main() {
    std::cout << "Hello, World!\n";

    std::cout << "Hello, World in new line!" << "\n";

    std::cout << "Hello, VS in new line using a separated backslash n after <<" << std::endl;

    std::cout << "Hello, World in new line using endl instruction!";

    std::cout << " There is going to be three breaks after this" << std::endl << "\n\n"; // <--This gives three line breaks.

    std::cout << "You can" << " continue writing with less less and without any instructions in between" << "\n" << "Also ofcourse after giving breaks using backslash n too" << std::endl << "\n";

    //std::cout << "You can't" << std::cout << "do this";

    std::cout << "You can" << std::endl << "do this" << "\n";



    return 0;
}
