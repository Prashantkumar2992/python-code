# demo 2
class Student:
    """ This is doc string for Student class """
    # class variable
    school_name = "CDAC"    
    
    # initialiser
    def __init__(self,rcv_name,rcv_rollno,rcv_pocket_money,rcv_course):
        # instance variable
        self.student_name = rcv_name      # public instance variable 
        self.student_rollno = rcv_rollno   # public instance variable 
        self.__student_pocket_money = rcv_pocket_money # private instance variable 
        self._student_enrolled_coursename = rcv_course # public instance variable 
        print(f"{self} was created successfully with values {rcv_name},{rcv_rollno},{rcv_pocket_money},{rcv_course}")

    # instance method
    def get_enrolled_course(self):
        return self.student_enrolled_coursename

    # instance method
    def get_student_pocket_money(self):
        return self.student_pocket_money
    
    # instance method
    def enroll(self,rcv_course_name):
        self.student_enrolled_coursename = rcv_course_name

    # instance method
    def unenroll(self):
        self.student_enrolled_coursename = None

    # class method
    @classmethod
    def change_schoolname(cls,rcv_schoolname):
        cls.school_name = rcv_schoolname
    
    # static method
    @staticmethod
    def display_facilities_available():
        print("Facilities are 1) Gym ---- 2)Library ---- 3)TT\n")
     
     # Operator Overloading -- implemented this to support greater than operation for Student class 
    def __gt__(self,other_obj):
        return self.student_rollno > other_obj.student_rollno    
    
    # Operator Overloading -- implemented this to support Equal to operation for Student class 
    def __eq__(self,other_obj):
       return (self.student_name == other_obj.student_name  and 
               self.student_rollno == other_obj.student_rollno and
               self.__student_pocket_money == other_obj.__student_pocket_money and
               self._student_enrolled_coursename == other_obj._student_enrolled_coursename)
          
# main method which is outside the class 
def main():
    print("I am in main and I am not part of the class ")

    # create a Student object referenced by gaurav
    gaurav= Student("Gaurav",1,100,'Python')
    # create another Student object referenced by pratik
    pratik= Student("Pratik",2,200,'Java')
    
    # create a Student object referenced by gaurav_copy
    gaurav_copy= Student("Gaurav",1,100,'Python')
    
    
    # print("Private attribute :", gaurav.__student_pocket_money)
    print("Private attribute :", gaurav._Student__student_pocket_money)
    print("Protected attribute" , gaurav._student_enrolled_coursename)
    
    
    if gaurav > pratik:
        print("Gaurav rollno: {gaurav.student_rollno} is greater than that of Pratik")
    else:
        print(f"Pratik rollno: {pratik.student_rollno} is greater than that of Gaurav")    
    
    if gaurav == gaurav_copy:
        print("both objects have same contents ")

# invoke the main function 
main()