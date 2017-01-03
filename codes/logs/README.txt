Synchronize remote computer date and time with head computer by typing:

> sudo ssh -t name@host "sudo date --set=\"$(date)\"" 