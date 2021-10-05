#!/bin/bash

ls -l | while read line

do
	echo -e "$line\n"
done
