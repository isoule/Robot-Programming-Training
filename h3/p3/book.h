#ifndef BOOK_H_
#define BOOK_H_

class Book {
 public:
  std::string title_;
  bool checked_in_;

  Book(sdt::string, bool);

  void get_checked();
};

#endif
