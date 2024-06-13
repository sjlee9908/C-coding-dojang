#include <stdio.h>

enum LuxSkill {
	LightBlinding = 1,
	PrismaticBarrier,
	LucentSingularity,
	FinalSpark
};

int main() {
	enum LuxSkill skill;

	skill = LightBlinding;

	switch (skill)
	{
	case LightBlinding:
		printf("LightBinding\n");
		break;
	case PrismaticBarrier:
		printf("PrismaticBarrier\n");
		break;
	case LucentSingularity:
		printf("LucentSingularity\n");
		break;
	case FinalSpark:
		printf("FinalSpark\n");
		break;
	default:
		break;
	}
}