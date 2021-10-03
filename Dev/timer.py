import time

'''This is a Basic Timer '''
def countdown(t):
    while(t):
        mins, secs = divmod(t, 60)
        timer = '{:02d} : {:02d}'.format(mins, secs)
        print(timer, end='\r')
        time.sleep(1)
        t -= 1

    print("Timer Completed ... ")

t = input("Enter the Time in Seconds : ")
countdown(int(t))
