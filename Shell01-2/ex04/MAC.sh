#!/bin/bash
ifconfig -a | sed -rn 's/.*(([a-z0-9]{2}:){5}..).*/\1/p'
