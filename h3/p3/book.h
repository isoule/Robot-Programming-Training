#ifndef BOOK_H_
#define BOOK_H_

#include <string>

class Book {
 public:
  const std::string title_;
  bool checked_in_;

  Book(std::string, bool);

  void get_checked_status() const;
};

#endif
