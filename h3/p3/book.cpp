#include "book.h"

#include <string>

Book::Book(std::string title, bool checked_in)
    : title_(title), checked_in_(checked_in) {}

void ChangeBookStatus() { checked_in_ = !checked_in_; }

bool Book::get_checked_status() const { return checked_in_; }
