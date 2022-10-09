#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <pybind11/operators.h>
#include <sstream>

namespace py = pybind11;

PYBIND11_MODULE(example_cpp_py, m)
{
    m.doc() = "Python binding module for example-cpp.";
    
    // py::class_<SO2d>(m, "SO2")
    //     .def_static("random", &SO2d::random)
    //     .def_static("identity", &SO2d::identity)
    //     .def_static("fromAngle", &SO2d::fromAngle)
    //     .def_static("fromR", &SO2d::fromR)
    //     .def_static("fromTwoUnitVectors", &SO2d::fromTwoUnitVectors)
    //     .def_static("fromComplex", static_cast<SO2d (*)(const double, const double)>(&SO2d::fromComplex), "Instantiate SO2 from complex number fields")
    //     .def_static("fromComplex", static_cast<SO2d (*)(const Matrix<double,2,1> &)>(&SO2d::fromComplex), "Instantiate SO2 from a vector of complex number fields")
    //     .def(py::init())
    //     .def(py::init<const Ref<const Matrix<double,2,1>>>())
    //     .def(py::init<const SO2d &>())
    //     .def("w", static_cast<double& (SO2d::*)(void)>(&SO2d::w), "Write access to w.")
    //     .def("x", static_cast<double& (SO2d::*)(void)>(&SO2d::x), "Write access to x.")
    //     .def("array", &SO2d::array)
    //     .def("normalize", &SO2d::normalize)
    //     .def("normalized", &SO2d::normalized)
    //     .def("R", &SO2d::R)
    //     .def("inverse", &SO2d::inverse)
    //     .def("invert", &SO2d::invert)
    //     .def("angle", &SO2d::angle)
    //     .def(py::self * py::self)
    //     .def(py::self * Matrix<double,2,1>())
    //     .def(py::self + Matrix<double,1,1>())
    //     .def(py::self - py::self)
    //     .def(py::self * float())
    //     .def(float() * py::self)
    //     .def(py::self / float())
    //     .def_static("hat", &SO2d::hat)
    //     .def_static("vee", &SO2d::vee)
    //     .def_static("log", &SO2d::log)
    //     .def_static("Log", &SO2d::Log)
    //     .def_static("exp", &SO2d::exp)
    //     .def_static("Exp", &SO2d::Exp)
    //     .def("__repr__",
    //         [](const SO2d &q) {
    //             return "SO(2): [ " + std::to_string(q.w()) + ", " + std::to_string(q.x()) + "i ]";
    //         }
    //     );
}
