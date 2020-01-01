#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void) {
	

	int index, length, negTime = 0,posTime=0;
	int temp, negIndex=0;
	pair<int, int> ants[100000];

	int i,j;

	scanf("%d %d", &index, &length);

	for (i = 0; i < index; i++) {
		scanf("%d", &temp);
		if (temp < 0) {
			negIndex++;
			negTime = -temp > negTime ? -temp : negTime;
		}
		else posTime = length - temp > posTime ? length - temp : posTime;
		ants[i] = { abs(temp), i };

	}
	sort(ants, ants + index);
	
	if (negTime > posTime) printf("%d %d", ants[negIndex - 1].second+ 1, negTime);
	else printf("%d %d", ants[negIndex].second + 1, posTime);
	
	return 0;
}

