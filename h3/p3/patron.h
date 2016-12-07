#ifndef PATRON_H_
#define PATRON_H_

#include "book.h"

#include <vector>

class Patron {
 public:
  std::vector<Book> patron_books_;
};

#endif // PATRON_H_
