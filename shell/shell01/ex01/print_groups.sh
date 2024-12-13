export FT_USER=weijiangyang
groups $FT_USER | cut -d ':' -f 2 | tr ' ' ',' | sed 's/^,//'
