#!/bin/bash
sudo docker build -t my_nginx:latest .
expect [sudo] password for dharni:
send -- "system\r"
