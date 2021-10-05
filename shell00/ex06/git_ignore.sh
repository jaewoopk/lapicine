#!/bin/bash

find . -type f -exec git check-ignore {} + | xargs -I{} basename {}
