#include <stdio.h>
#include <stddef.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	printf("%d\n", offsetof(PacketHeader, flags));
	printf("%d\n", offsetof(PacketHeader, seq));

	return 0;
}