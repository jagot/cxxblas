if(APPLE)
  set(CBLAS_INCLUDE_FILE "Accelerate/Accelerate.h")
else()
  set(CBLAS_INCLUDE_FILE "cblas.h")
endif()
configure_file(cxxblas.h.in cxxblas.h)
