#!/bin/bash

time rsync -Pa /home/ben/download/other/debian_rsync_sys / --exclude=/media/* --exclude=/sys/* --exclude=/proc/* --exclude=/dev/* --exclude=/run/* --exclude=/home/ben/*
