#include<stdio.h>

typedef struct city {
	char Name[20];
	char Country[20];
	char Population[20];
} City;

void RemoveNewline(char* str) {
	size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}
}
void ShowCityInfo(City city) {
	printf("%s in %s with a population of %d people\n", city.Name, city.Country, atoi(city.Population));
}

City ReadCityInfo(void) {
	City city;
	printf("Name> "); fgets(city.Name, sizeof(city.Name), stdin);
	RemoveNewline(city.Name);
	printf("Country> "); fgets(city.Country, sizeof(city.Country), stdin);
	RemoveNewline(city.Country);
	printf("Population> "); fgets(city.Population, sizeof(city.Population), stdin);
	RemoveNewline(city.Population);
	return city;
}

int main(void) {
	printf("Input three cities\n");
	City city1 = ReadCityInfo();
	City city2 = ReadCityInfo();
	City city3 = ReadCityInfo();
	printf("Printing the three cities\n");
	printf("1. "); ShowCityInfo(city1);
	printf("2. "); ShowCityInfo(city2);
	printf("3. "); ShowCityInfo(city3);
	return 0;
}