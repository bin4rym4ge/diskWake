# diskWake

# Example diskWake script:
```shell
#!/bin/bash

diskWake /mnt/Drive1/.disk.wake /mnt/Drive2/.disk.wake /mnt/Drive3/.disk.wake /mnt/DriveN/.disk.wake
```
# Troubleshooting 
If your script fails to run it may not be marked as executable. Nothing a simple `chmod +x Your_Script_Name` shouldn't fix.

If your script fails to run diskWake `~/bin/` may not be in your `$PATH` bash variable this may help:

https://www.howtogeek.com/658904/how-to-add-a-directory-to-your-path-in-linux/

If there is another problem the file system diskWake is writing to may be root or readonly.

There is no error handling yet. I might add that to this pet project in the future.
