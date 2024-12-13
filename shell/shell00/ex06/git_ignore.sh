#!/bin/bash

# Check if the current directory is a Git repository
if git rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    echo "Listing all files ignored by the Git repository:"
    git ls-files --others --ignored --exclude-standard
else
    echo "Error: This is not a Git repository."
    exit 1
fi

