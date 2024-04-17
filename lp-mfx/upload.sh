user=allin
password=lilia1
pkg=lp-mfx.zip

bytes=`stat $pkg --printf="%s"`
savename=`basename $pkg`
echo "Uploading $pkg ($bytes bytes) as $savename ..."

curl -F login="${user}" -F pass="${password}" -F datasize="${bytes}" \
-F "pkg=@${pkg};filename=${savename};type=application/x-zip-compressed" \
http://ricardo.ecn.wfu.edu/gretl/cgi-bin/gretldata.cgi
