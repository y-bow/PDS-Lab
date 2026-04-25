class Book:
    def __init__(self, Title, Author, ISBN):
        self.__title = Title
        self.__author = Author
        self.__isbn = ISBN
        self.__status = "Available"
        
    def display_info(self):
        print(f"\nTitle : {self.__title} \nAuthor : {self.__author} \nISBN : {self.__isbn} \nStatus : {self.__status}")
        
    def check_out(self):
        if self.__status == "Available" or "available":
            self.__status = "Not Available"
            print(f"{self.__title} has been checked out")
        else:
            print(f"{self.__title} is already checked out")
        
    def return_book(self):
        if self.__status == "Not Available" or "not available":
            self.__status = "Available"
            print(f"{self.__title} has been returned")
        else:
            print(f"{self.__title} is already available")
        
book1 = Book("The Great Gatsby", "F. Scott Fitzgerald", "978-0-7432-7356-5")
book1.display_info()
book1.check_out()
book1.display_info()
book1.return_book()
book1.display_info()

