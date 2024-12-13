export FT_LINE1=2
export FT_LINE2=28
cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 1' | rev | sort -r | awk "NR >=$FT_LINE1 && NR <=$FT_LINE2" | tr '\n' ', ' | sed 's/, $/./'
