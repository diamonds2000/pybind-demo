
#include <pybind11/pybind11.h>
#include "model.h"
#include "../force/Force.h"
#include "../force/ForceList.h"

namespace py = pybind11;


PYBIND11_MODULE(Model, m) {
    m.doc() = "Model module";
    py::class_<Model>(m, "Model")
        .def(py::init<const std::string&>())
        .def("addForce", &Model::addForce)
        .def("getForces", &Model::getForces);
}