cc_library(
  name = 'library',
  hdrs = [
    "library.h",
    "patron.h",
    "book.h"
  ],
  srcs = [
    "library.cpp",
    "patron.cpp",
    "book.cpp"
  ],
  visibility = ["//visibility:public"]
)

cc_binary(
  name = "main",
  hdrs = [
    "library.h",
    "patron.",  
    "book.h"
  ],
  srcs = [
    "library.cpp",
    "patron.cpp",
    "book.cpp"
  ],
  deps = ["//:library"],
  visibility = ["//visibility:public"]
)
