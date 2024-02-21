import datetime

def derive_age(date_of_birth):
    age_in_days :datetime.timedelta = datetime.datetime.today() - date_of_birth 
    print(type(age_in_days))
    print("Age in days: ",age_in_days.days)

date_string = "21 April, 2023 00:00:00 000000"
datetime_object = datetime.datetime.strptime(date_string, "%d %B, %Y %H:%M:%S %f")

derive_age(datetime_object)
print("The datetime object in string format is " , datetime.datetime.strftime(datetime_object,'%A %B'))
    