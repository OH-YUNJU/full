#!/bin/bash 

input="user.dat"

while IFS=',' read -r username uid gid comment
do
	echo "Delete $username" 
	userdel "$username" 
	rm -rf /home/$username
	rm -rf /var/mail/$username

done < $input
 
echo 
tail -3 /etc/passwd
