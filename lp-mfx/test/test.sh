#!/bin/sh

cat /dev/null > diffs

for f in *.inp ; do
  echo "$f"
  if ! gretlcli -b $f > ${f%.inp}.out ; then
    echo "Failed"
  fi
  if [ -f ${f%.inp}.ok ] ; then
    echo "## $f ##" >> diffs
    diff -bB ${f%.inp}.ok ${f%.inp}.out >> diffs
  fi
done


