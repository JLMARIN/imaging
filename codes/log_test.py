from customTimer import RepeatedTimer
from time import sleep
import sys
import time
import os


class Tee:
    def __init__(self, out1, out2):
        self.out1 = out1
        self.out2 = out2

    def write(self, *args, **kwargs):
        self.out1.write(*args, **kwargs)
        self.out2.write(*args, **kwargs)


def setup_logger():
    timestr = time.strftime("%Y%m%d-%H%M%S")
    file_name = os.path.splitext(sys.argv[0])[0]
    sys.stdout = Tee(open("logs/" + file_name + "-" + timestr + ".txt", "w"), sys.stdout)


def hello():
    print "hello!"


if __name__ == '__main__':

    setup_logger()

    print "Starting..."
    rt = RepeatedTimer(1, hello)

    try:
        sleep(5)
    finally:
        rt.stop()
