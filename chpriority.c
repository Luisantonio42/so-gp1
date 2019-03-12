#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char ** argv){
	int pid;
	int priority;
	pid = atoi(argv[1]);
	priority = atoi(argv[2]);
	printf(1,"priority: %d",priority);
	setpriority(pid, priority);
	exit();
}
