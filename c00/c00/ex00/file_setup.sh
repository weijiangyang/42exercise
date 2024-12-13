#!/bin/bash

# Variables (Customize as Needed)
FILENAME="ft_putchar.c"
PERMISSIONS="0545" # Permissions: -r--r-xr-x
SIZE=40            # File size in bytes
TIMESTAMP="202406012342" # Format: YYYYMMDDHHMM
# Step 1: Create the File
touch "$FILENAME"

# Step 2: Set Permissions
chmod "$PERMISSIONS" "$FILENAME"

# Step 3: Set File Size
echo -n "1234567890123456789012345678901234567890" > "$FILENAME"

# Truncate to Exact Size (Optional Safety)
truncate -s "$SIZE" "$FILENAME"

# Step 4: Set Timestamp
touch -t "$TIMESTAMP" "$FILENAME"

# Step 5: Display File Details
echo "File details:"
ls -l --time-style=long-iso  "$FILENAME"

