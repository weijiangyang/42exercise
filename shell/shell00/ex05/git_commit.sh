#!/bin/bash

# Check if the current directory is a Git repository
if git rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    # Display the last 5 commit IDs
    git log --format="%H" -n 5
else
    echo "Error: This is not a Git repository."
    exit 1
fi

