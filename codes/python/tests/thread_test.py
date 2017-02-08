from customTimer import RepeatedTimer
from time import sleep


def hello():
    print "hello!"


if __name__ == '__main__':

    print "Starting..."
    rt = RepeatedTimer(1, hello)

    try:
        sleep(5)
    finally:
        rt.stop()
