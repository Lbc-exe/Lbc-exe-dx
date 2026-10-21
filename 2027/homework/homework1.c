#include<studio.h>
int main{
	#!/bin/bash<br/>echo "当前时间:" > output.txt
	date >> output.txt<br/>echo "最近使用的10条命令:" >> output.txt
	history | tail -n 10 >> output.txt
	echo "笔记字数:" >> output.txt
	wc -w ../notes/my_notes.md >> output.txt
	return 0;
}
