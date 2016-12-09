#include "patron.h"
#include "book.h"

#include <vector>
#include <string>

void Patron::AddPatronBook(Book add_book) {
  patron_books_.push_back(add_book);
}

void Patron::RemovePatronBook(Book remove_book) {
  std::string look_title;
  look_title = remove_book.get_title();
  for (int address = 0; address < patron_books_.size(); address++) {
    if (patron_books_[address].get_title() == look_title) {
      break;
    }
  }
}
