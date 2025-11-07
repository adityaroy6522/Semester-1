#Create a script that displays various sysatem information like current date and time, logged in user, system architure information

#!/bin/bash

# Display current date and time
echo "=============================="
echo "Current Date and Time:"
date
echo "=============================="

# Display logged-in users
echo "Logged-in Users:"
who
echo "=============================="

# Display system architecture information
echo "System Architecture Info:"
uname -a
echo "=============================="

# Display uptime
echo "System Uptime:"
uptime
echo "=============================="

# Display hostname
echo "Hostname:"
hostname
echo "=============================="

# Display kernel version
echo "Kernel Version:"
uname -r
echo "=============================="

# Display CPU information
echo "CPU Info:"
lscpu | grep -E '^Model name|^Architecture|^CPU\(s\)|^Thread|^Core|^Socket'
echo "=============================="

# Display memory information
echo "Memory Info:"
free -h
echo "=============================="

# Display disk usage
echo "Disk Usage:"
df -h --total | grep -E '^Filesystem|^/dev|^total'
echo "=============================="