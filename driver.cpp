#include <iostream>
#include <pybind11/embed.h> // everything needed for embedding
namespace py = pybind11;

int main() {

  std::cout << R"(
     ____ ___  ________.____     
    |    |   \/  _____/|    |    
    |    |   /   \  ___|    |    
    |    |  /\    \_\  \    |___ 
    |______/  \______  /_______ \
                 \/        \/)"
            << std::endl;

  py::scoped_interpreter guard{}; // start the interpreter and keep it alive

  py::print("Hello, World!"); // use the Python API
}