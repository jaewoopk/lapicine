#!/bin/sh
ifconfig | grep --only-matching -E '([a-z,0-9]{2}\:){5}[a-z,0-9]{2}'
