#!/usr/bin/env bash

sudo make install
kill -HUP "$(pgrep -u "$USER" "\bdwmblocks$")"
dwmblocks &
