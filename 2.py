
class student:
    def __init__(self, name, id):
        self.__name = name
        self.__id = id
        self.__grades = []
        
    def add_grade(self, grade):
        self.__grades.append(grade)
        
    def get_average(self):
        sum = 0
        for i in self.__grades:
            sum += i
        avg = sum/len(self.__grades)
        print(f"Average : {avg:.2f}")
        self.__avg = avg
        
    def is_passing(self):
        if self.__avg >= 60:
            self.__status = "Passing"
        else:
            self.__status = "Not Passing"
        
    def display_report(self):
        print(f"Student : {self.__name} \nGrades : {self.__grades} \nAverage : {self.__avg:.2f} \nStatus : {self.__status}")


s1 = student("Student1", 1)
s1.add_grade(85)
s1.add_grade(90)
s1.add_grade(78)
s1.get_average()
s1.is_passing()
s1.display_report()