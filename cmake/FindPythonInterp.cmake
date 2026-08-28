# Shim for the FindPythonInterp module removed from CMake >= 3.27.
# googletest's internal_utils.cmake still calls find_package(PythonInterp);
# this redirects that lookup to the modern FindPython3 module so it resolves
# without CMake falling back to (and failing) a config-mode search.
find_package(Python3 COMPONENTS Interpreter QUIET)

if(Python3_Interpreter_FOUND)
  set(PYTHONINTERP_FOUND TRUE)
  set(PYTHON_EXECUTABLE ${Python3_EXECUTABLE})
  set(PYTHON_VERSION_STRING ${Python3_VERSION})
else()
  set(PYTHONINTERP_FOUND FALSE)
endif()
