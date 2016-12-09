#ifndef BOOK_H_
#define BOOK_H_

#include <string>

class Book {
 public:
  Book(std::string, bool);

  // Methods
  void ChangeBookStatus();
  // Getter func
  bool get_checked_status() const;
  std::string get_title() const;

 private:
  std::string title_;
  bool checked_in_;
};

#endif
