As a Student, I want to study, so that borrow book
{
	Basic Flow {
		(User) 1. the Student shall input cardId.
		(User) 2. the Student shall input password.
		(User) 3. the Student shall search book.
		(User) 4. the Student shall return book.
		(User) 5. the LibraryManager shall login account.
		(User) 6. the LibraryManager shall check curent book num.
		(User) 7. the LibraryManager shall buy book.
		(User) 8. the LibraryManager shall update book data.
		(System) 9. when Student input cardId, the system shall check cardId.
		(System) 10. when Student input password, the system shall check password.
		(System) 11. when Student search book, the system shall print book list.
		(System) 12. when Student return book, the system shall check student card.
		(System) 13. when Student return book, the system shall check book status.
		(System) 14. when Student return book, the system shall update database.
		(System) 15. when LibraryManager login account, the system shall check account.
		(System) 16. when LibraryManager check book list, the system shall print book list and num.
		(System) 17. when LibraryManager buy book, the system shall update database.
	}
	Alternative Flow {
		A. At any time, System fails :
		1. remind Student fail borrow.
		2. remind Student fail return.
		3. remind Student fail check list.
		4. remind LibraryManager fail update database.
		5. remind LibraryManager fail login account.
		6. system record fail time.
	}
} 