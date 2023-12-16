#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }
    std::ofstream file(argv[1]);
    file << "#include <iostream>\n";
    file << "int main() {\n";
    file << "    std::cout << \"Hello, world!\" << std::endl;\n";
    file << "    return 0;\n";
    file << "}\n";
    return 0;
}