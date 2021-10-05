#!/bin/bash

ifconfig -a | grep -a ether | awk '{ print $2 }'
