As a Student, I want to study, so that borrow book
{
	Basic Flow {
		(User) 1. the Student shall input cardId.
		(User) 2. the Student shall select book.
		(User) 3. the Student shall borrow Book.
		(System) 4. when action ready, the system shall remind Student succese borrow.
	}
	Alternative Flow {
		A. At any time, System fails :
		1. remind Student fail borrow.
		2. system record fail time.
	}
} 