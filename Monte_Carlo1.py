
import random
from datetime import datetime

# Passing the current time as the seed value
dt = datetime.now()
random.seed(int(dt.strftime('%Y%m%d%H%M%s%f')))

# random.seed(4)      # Fixses random no values for every itr/run 
for i in range(5):
    print(random.randint(0,10), end ="\n")


