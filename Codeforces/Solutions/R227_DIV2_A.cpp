/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

// Solution :

int s_hour, s_minutes, t_hours, t_minutes, sleep_time, solution_hour, solution_minutes;

int main()
{
	
	scanf("%d:%d\n%d:%d", &s_hour, &s_minutes, &t_hours, &t_minutes);

	sleep_time = s_minutes + s_hour * 60 - t_hours * 60 - t_minutes;

	if(sleep_time < 0) sleep_time += 24*60;

	solution_minutes = sleep_time % 60;
	solution_hour = (sleep_time - solution_minutes) / 60;

	printf("%.02d:%.02d\n", solution_hour, solution_minutes);

	return 0;
}
