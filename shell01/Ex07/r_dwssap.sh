#!/bin/bash

cat /etc/passwd | grep -Eo "^[^:]+" | sed -n 1~2p | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | sed -z 's/\n/,/g' | sed "s/.$/./g"
