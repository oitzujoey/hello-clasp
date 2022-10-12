#include <iostream>
#include <clasp/clasp.h>

PACKAGE_USE("COMMON-LISP");
NAMESPACE_PACKAGE_ASSOCIATION(hello_, SAPkg, "HELLO%");

namespace hello_ {

void hello() {
  std::cout << "Hello, world!";
}

CL_EXPOSE
void hello_startup() {
  using namespace clbind;
  package_ h(SAPkg);
  h.def("hello", &hello);
}
}
