class Stack:
    def __init__(self, l):
        self.__l = l
    def stack_details(self):
        if self.__l == 0:
            print("Stack is empty")
        else:
            print(f"Elements in the stack are : ")
            for i in range(0, len(self.__l)):
                print(self.__l[i], end = " ")
            print("\n")
    def push(self, new_element):
        self.__l.append(new_element)
    def pop(self):
        self.__l.remove(self.__l[len(self.__l) - 1])
    def peek(self):
        print(self.__l[len(self.__l) - 1])
    def size(self):
        print(len(self.__l))

l = list(map(int,input("Enter the numbers to put in list (separated by a space) : ").split())) 
l1 = Stack(l)
l1.stack_details()
l1.push(23)
l1.stack_details()
l1.pop()
l1.stack_details()
l1.peek()
l1.size()
