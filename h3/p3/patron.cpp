#include "patron.h"
#include "book.h"

#include <vector>
#include <string>
#include <cstdint>

void Patron::AddPatronBook(Book add_book) {
  patron_books_.push_back(add_book);
}

void Patron::RemovePatronBook(Book remove_book) {
  std::string look_title = remove_book.get_title();
  for (uint32_t address = 0; address < patron_books_.size(); address++) {
    if (patron_books_[address].get_title() == look_title) {
      std::swap(patron_books_[address], patron_books_[patron_books_.size() - 1]);
      patron_books_.pop_back();
      break;
    }
  }
}
