#!/bin/bash

find ./ -type f -name "*.sh" | xargs -I{} basename -s .sh {}
