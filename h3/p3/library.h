#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "date.h"
#include "patron.h"

class Library {
 public:
  std::vector<Book> library_;
};

#endif  // LIBRARY_H_
