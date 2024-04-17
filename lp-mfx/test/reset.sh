#!/bin/sh

cat /dev/null > diffs

for f in *.inp ; do
  echo "$f"
  gretlcli -b $f > ${f%.inp}.ok
done
