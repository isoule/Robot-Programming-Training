#include <string>

#include "book.h"

Book::Book(std::string title, bool checked_in) {
  title_ = title;
  checked_in_ = checked_in;
}

Book::get_checked() { return checked_in_; }
