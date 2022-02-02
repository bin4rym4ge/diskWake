# diskWake

# Example diskwake script:

#!/bin/bash

diskWake /mnt/Drive1/disk.wake /mnt/Drive2/disk.wake /mnt/Drive3/disk.wake

# Troubleshooting 
If your script fails to run it may not be marked as executable. Nothing a simple "chmod +x Your_Script_Name" shouldnt fix.

If your script fails to run diskWake "~/bin/" may not be in your $PATHS bash variable. this may help:

https://www.howtogeek.com/658904/how-to-add-a-directory-to-your-path-in-linux/

There is no error handeling yet. I might add that in the future.
