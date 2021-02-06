#!/bin/bash

/home/evan/.local/bin/qmk compile -kb CSOSTK -km default
/home/evan/.local/bin/qmk flash -kb CSOSTK -km default
