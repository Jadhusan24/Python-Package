import time
import sys

time_start = time.time()
seconds = 0
minutes = 0

while True:
    try:
        sys.stdout.write(f"\r{minutes} Minutes {seconds} Seconds")
        sys.stdout.flush()
        time.sleep(1)
        seconds = int(time.time() - time_start) - minutes * 60
        if seconds >= 60:
            minutes += 1
            seconds = 0
    except KeyboardInterrupt:
        break
