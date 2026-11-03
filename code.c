#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("------------火影手游买s忍碎片所需金币计算器------------\n");
	int pian, n, A;
	int money = 0, points = 0,  all_points=0, s1 = 500, s2 = 500, s3 = 1000, v7 = 1, m1 = 0, m2 = 0;
	printf("请输入您所需购买的s忍碎片的数量：");
	scanf("%d", &pian);
	printf("您每日能在特权商店购买单个忍者多少片碎片?\ntip:\nv6及以下为2片，\nv7为3片，\nv8为4片，\n.......\n请输入:");
	scanf("%d", &n);
	if (n >= 3)
	{
		printf("您是v7及以上玩家，可享双倍特权积分大返利。\n");
		v7 = 2;
	}
	printf("若您没有超影特权，请输入1\n若您有7天的超影特权，请输入2\n若您一直有超影特权，请输入3\n请输入：");
	scanf("%d", &A);
	if (A == 1)
	//没有超影特权的情况下
	{
		for (int i = 1;i <= pian;i++)
		{
			money += 680;
			points += 680;
			all_points += 680;
			m1++;
			if (all_points >= 5000 && s1 != 0)//特权积分大返利1
			{
				points = points + v7 * s1;
				s1 = 0;
			}
			if (all_points >= 10000 && s2 != 0)//特权积分大返利2
			{
				points = points + v7 * s2;
				s2 = 0;
			}
			if (all_points >= 20000 && s3 != 0)//特权积分大返利3
			{
				points = points + v7 * s3;
				s3 = 0;
			}
			while (points >= 2080)//积分抵扣
			{
				points -= 2080;
				pian--;
				m2++;
			}
		}printf("您所需金币为%d。\n其中金币购买%d片。\n特权积分购买%d片。\n", money, m1, m2);
	}
	else if (A == 2)
	//有7天超影特权情况下
	{
		int j = 7 * n ;//j为7天超影特权内能购买的数量
		if (pian <= j)
		{
			for (int i = 1;i <= pian;i++)
			{
				money += 578;
				points += 578;
				all_points += 578;
				m1++;
				if (all_points >= 5000 && s1 != 0)//特权积分大返利1
				{
					points = points + v7 * s1;
					s1 = 0;
				}
				if (all_points >= 10000 && s2 != 0)//特权积分大返利2
				{
					points = points + v7 * s2;
					s2 = 0;
				}
				if (all_points >= 20000 && s3 != 0)//特权积分大返利3
				{
					points = points + v7 * s3;
					s3 = 0;
				}
				while (points >= 2080)//积分抵扣
				{
					points -= 2080;
					pian--;
					m2++;
				}
			}
			printf("您所需金币为%d。\n其中金币购买%d片。\n特权积分购买%d片。\n", money, m1, m2);
		}
		else
		{
			for (int i = 1; i <= pian && i <= j; i++)
			{
				money += 578;
				points += 578;
				all_points += 578;
				m1++;
				if (all_points >= 5000 && s1 != 0)//特权积分大返利1
				{
					points = points + v7 * s1;
					s1 = 0;
				}
				if (all_points >= 10000 && s2 != 0)//特权积分大返利2
				{
					points = points + v7 * s2;
					s2 = 0;
				}
				if (all_points >= 20000 && s3 != 0)//特权积分大返利3
				{
					points = points + v7 * s3;
					s3 = 0;
				}
				while (points >= 2080)//积分抵扣
				{
					points -= 2080;
					pian--;
					m2++;
				}
			}
			//7天超影结束后的计算
			int k = pian - j;
			if (k > 0)
			{
				for (int i = 1;i <= k;i++)
				{
					money += 680;
					points += 680;
					all_points += 680;
					m1++;
					if (all_points >= 5000 && s1 != 0)//特权积分大返利1
					{
						points = points + v7 * s1;
						s1 = 0;
					}
					if (all_points >= 10000 && s2 != 0)//特权积分大返利2
					{
						points = points + v7 * s2;
						s2 = 0;
					}
					if (all_points >= 20000 && s3 != 0)//特权积分大返利3
					{
						points = points + v7 * s3;
						s3 = 0;
					}
					while (points >= 2080)//积分抵扣
					{
						points -= 2080;
						k--;
						m2++;
					}
				}
			}
		}
		printf("您所需金币为%d。\n其中金币购买%d片。\n特权积分购买%d片。\n", money, m1, m2);
	}
	//一直有超影的情况下
	else if (A == 3)
	{
		for (int i = 1;i <= pian;i++)
		{
			money += 578;
			points += 578;
			all_points += 578;
			m1++;
			if (all_points >= 5000 && s1 != 0)//特权积分大返利1
			{
				points = points + v7 * s1;
				s1 = 0;
			}
			if (all_points >= 10000 && s2 != 0)//特权积分大返利2
			{
				points = points + v7 * s2;
				s2 = 0;
			}
			if (all_points >= 20000 && s3 != 0)//特权积分大返利3
			{
				points = points + v7 * s3;
				s3 = 0;
			}
			while (points >= 2080)//积分抵扣
			{
				points -= 2080;
				pian--;
				m2++;
			}
		}
		printf("您所需金币为%d。\n其中金币购买%d片。\n特权积分购买%d片。\n", money, m1, m2);
	}return 0;
}
