class DigitalClock:
    
    def __init__(self, hrs, mins, secs):
        self.hours = hrs
        self.minutes = mins
        self.seconds = secs
    
    def display(self):
        print(f"{self.hours}:{self.minutes}:{self.seconds}")
        
    def tick(self):
        self.seconds += 1
        if self.seconds == 60:
            self.seconds = 00
            self.minutes += 1
        if self.minutes == 60:
            self.minutes = 00
            self.hours += 1
        if self.hours == 24:
            self.hours = 00
            self.minutes = 00
            self.seconds = 00
        
    
clock = DigitalClock(23, 59, 50)
clock.display()
clock.tick()
clock.display()

for _ in range(10):
    clock.tick()
    
clock.display()