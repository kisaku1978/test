#/bin/sh
trap "echo -ne \"\n\n$0 HUP!!\n\n\"; exit 1;" HUP
trap "echo -ne \"\n\n$0 EXIT!!\n\n\"; exit 1;" EXIT
trap "echo -ne \"\n\n$0 INT!!\n\n\"; exit 1;" INT
trap "echo -ne \"\n\n$0 QUIT!!\n\n\"; exit 1;" QUIT
trap "echo -ne \"\n\n$0 TERM!!\n\n\"; exit 1;" TERM
exit 0;
while true; do
	date;
	sleep 5;
done

