#!/bin/bash

id -nG $FT_USER | sed -e "s/ /,/g"
