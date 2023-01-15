#include "Library.h"

Library::Library(int books) {	
	_books = new int(books);
}

Library::~Library() {	
	delete[] _books;
}