#!/bin/bash
for i in {1..50}; do
    sleep 200 &
done
echo "50 procesos en background creados."
