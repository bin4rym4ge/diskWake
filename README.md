# diskWake

# example diskwake script:

#!/bin/bash

diskWake /mnt/Drive1/disk.wake /mnt/Drive2/disk.wake /mnt/Drive3/disk.wake

# torouble shooting 
if your script fails to run it may not be marked as executable. Nothing a simple "chmod +x Your_Script_Name" shouldnt fix.

if your script fails to run diskWake "~/bin/" may not be in your $PATHS bash variable. this may help:
https://www.howtogeek.com/658904/how-to-add-a-directory-to-your-path-in-linux/

there is no error handeling yet
