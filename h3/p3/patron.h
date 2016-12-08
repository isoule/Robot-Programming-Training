#ifndef PATRON_H_
#define PATRON_H_

#include "book.h"

#include <map>

class Patron {
 public:
  std::map<std::string, Book> patron_books_;
};

#endif // PATRON_H_
