
#from pythonping import ping
#ping('www.google.com', verbose=True, count=8)


import platform    # For getting the operating system name
import subprocess  # For executing a shell command

user=input("")
def ping(host,pinngs='4'):
    # Option for the number of packets as a function of
    param = '-n' if platform.system().lower()=='windows' else '-c'
    command = ['ping', param, pinngs, host]
    return subprocess.call(command) == 0
ping(user)