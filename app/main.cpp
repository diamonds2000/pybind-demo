#include <iostream>
#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

namespace py = pybind11;

int main(int argc, char* argv[]) {
    std::string script_file;
    if (argc == 2)
    {
        script_file = argv[1];
    }

    //py::scoped_interpreter guard{};
    //py::module::import("Force");

    py::initialize_interpreter();

    if (!Py_IsInitialized())
    {
        std::cerr << "Failed to initialize Python interpreter" << std::endl;
        return 1;
    }

    pybind11::exec(R"(print('Hello from Python!'))");

    if (!script_file.empty())
        py::eval_file(script_file);

    py::finalize_interpreter();

    return 0;
}