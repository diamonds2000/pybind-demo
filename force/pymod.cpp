
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "Force.h"
#include "SCForce.h"
#include "ForceList.h"

namespace py = pybind11;


PYBIND11_MODULE(Force, m) {
    py::enum_<ForceType>(m, "ForceType")
        .value("Unknown", ForceType::Unknown)
        .value("SCForceType", ForceType::SCForceType)
        .value("MCForceType", ForceType::MCForceType)
        .export_values();
    
    py::class_<Force>(m, "Force")
        .def(py::init<const std::string&>())
        .def_property("name", &Force::name, &Force::setName)
        .def_property_readonly("type", &Force::type);

    py::class_<SCForce>(m, "SCForce", py::base<Force>())
        .def(py::init<const std::string&>())
        .def_property("magnitude", &SCForce::magnitude, &SCForce::setMagnitude);

    py::class_<ForceList>(m, "ForceList")
        .def(py::init<>())
        .def("addForce", &ForceList::addForce, py::keep_alive<1, 2>())
        .def("removeForce", &ForceList::removeForce)
        .def("forces", &ForceList::forces, py::return_value_policy::reference_internal);
}