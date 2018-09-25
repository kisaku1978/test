#/bin/sh
x="1 2 3"
set -- $x
echo "x=$x"
echo "@=$@"
echo "#=$#"


x="1,2,3"
echo "IFS=$IFS"
echo "x=$x"
echo "@=$@"
echo "#=$#"
IFS=","
echo "IFS=$IFS"
echo "@=$@"
echo "#=$#"

