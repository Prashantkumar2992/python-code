# https://regexlearn.com/
# https://regexr.com/
import re

"""
[] . ^ $ * + ? {}
() \ |

#\w - Matches any alphanumeric character (digits and alphabets and underscore). 
    #\d - Matches any decimal digit. Equivalent to [0-9]
    #\s - Matches where a string contains any whitespace character.
    # Equivalent to [ \t\n\r\f\v].

"""
#------------------------------------
# DEMO 
#------------------------------------
import re
# string0 = "abcdefghijklmnopqrstuvwxyz"
# string1 = "abcdefghijklmnopqrstuvwxyz1234567890"
# string2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# string3 = "0123456789"
# string4 = "HELLO HEL "
# string5 = "hello hel"
# string6 = "hello123"
# string14 = "hello123h"
# string7 = "123hello"
# string8 = "__"
# string9 = "......"
# string10 = "**************"
# string11 = "```````````````"
# string12 = "!!!!!!!!!!!"
# string13 = ""
# string15 = "abcdef highkl"
# string16 = "a430928409238409234"
# string17 = "a4"

# my_list = [string0,string1,string2,string3,string4,string5,string6,string14,string7,string8,string9,string10,string11,string12,string13,string15,string16,string17]
   
# for test_string in my_list:
#     result = re.findall(r"^[a-z]+$", test_string, re.IGNORECASE)  
#     search_obj = re.search(r"^[a-z]+$", test_string, re.IGNORECASE)  
#     if search_obj is not None :
#         print(f"{test_string} resulted into {result}")  
#         print(f"{test_string} resulted into {search_obj}")  
   
"""
--------------------------------
Exercises -- Regular Expressions
-------------------------------
Given the list of strings as input :

gaurav1234@gmail.com
pratik190900234@gmail.com
2009_rocking_person@yahoo.com
GodFather2022@yahoo.com
Brocklesner_89_WWE@yahoo.com
TheRock_WWE@yahoo.com
JohnCena_WWE@yahoo.com
Undertaker_Roman_reigns@outlook.com
6789764666@rediffmail.com
Kane#6789@gmail.com


1) provide me the list of emails that do have special characters of #~`!
2) provide me the list of emails that start with numbers
3) provide me the list of emails that start with numbers followed by an underscore
4) provide me the list of emails that start with numbers followed by an underscore or small case characters
5) provide me the list of emails that start with numbers followed by an underscore or small case characters or large case characters
6) Provide me list of emails with only numbers before the @
7) Provide me list of emails with numbers anywhere before the @


"""
t1 = 'gaurav1234@gmail.com'
t2 = 'pratik190900234@gmail.com'
t3 = '2009_rocking_person@yahoo.com'
t4 = 'GodFather2022@yahoo.com'
t5 = 'Brocklesner_89_WWE@yahoo.com'
t6 = 'TheRock_WWE@yahoo.com'
t7 = 'JohnCena_WWE@yahoo.com'
t8 = 'Undertaker_Roman_reigns@outlook.com'
t9 = '6789764666@rediffmail.com'
t9 = 'Kane#6789@gmail.com'
P_list = [t1,t2,t3,t4,t5,t6,t7,t8,t9]

pattern1 = '[#~`!]'
pattern2 = '^\d+'
pattern3 = '^\d_'
pattern4 = '^\d=[_a-z]+.*'
pattern5 = '^\d=[_a-zA-Z]+.*'
pattern6 = '^\d+@'
pattern7 = '\d+@.*'



for i in P_list:
    result = re.search(pattern5, i)
    if result:
        print(f"{i}")