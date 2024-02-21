import random


class passenger:
    airline_name = "air india"
    current_ticket = 0
    @classmethod    
    def book(cls):
        cls.current_ticket += 1
        return cls.current_ticket
            
    
    
    def __init__(self,p_name,p_age,p_city):
        __letter = "ABCDEF"
        self.ticket_no = passenger.book()
        self.passenger_name = p_name
        self.passenger_age = p_age
        self.passenger_city = p_city
        self.flight_no = str(random.choice(__letter))+str(random.random()*50)
        self.seat_assigment = str(int(random.random()*50))+ str(random.choice(__letter))
    
        
    def get_p_name(self):
        return self.passenger_name

    def set_p_name(self, name):
        self.passenger_name = name
    
    def get_p_city(self):
        return self.passenger_city

    def set_p_city(self, city):
        self.passenger_city = city
    
    def display(self):
        print("---------------------------------------------------------------------------------------------------------")
        print(" passenger_name :\t", self.passenger_name)
        print(" passenger_age :\t", self.passenger_age)
        print(" passenger_city :\t", self.passenger_city)
        print(" ticket_no :\t", self.ticket_no)
        print(" flight_no :\t", self.flight_no)
        print(" seat_no :\t", self.seat_assigment)
        print("-------------------------------------------------------------------------------------------------------------------")
        
def main():
        
        passenger1 = passenger("rahul", 21, "patna")
        passenger2 = passenger("ranjan",54, "pune")
        passenger3 = passenger("natasha", 25, "uk")
        passenger1.display()
        passenger2.display()
        passenger3.display()



                    
main()