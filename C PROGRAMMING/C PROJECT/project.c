#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define API_KEY "abc9c7aa16813480227dad54fa3e0743"

void getWeather(char city[]) 
{
    char cmd[500];
    sprintf(cmd,
        "curl -s \"https://api.openweathermap.org/data/2.5/weather?q=%s&units=metric&appid=%s\" > response.txt",
        city, API_KEY);

    system(cmd);

    FILE *fp = fopen("response.txt", "r");
    if (!fp) {
        printf("Error opening response file.\n");
        return;
    }

    char json[6000];
    fread(json, 1, sizeof(json), fp);
    fclose(fp);

    // Check for invalid city
    if (strstr(json, "\"cod\":\"404\"") || strstr(json, "city not found")) {
        printf("\n❌ Invalid city name!\n");
        return;
    }

    // Extract temperature
    char *tempPtr = strstr(json, "\"temp\":");
    float temp = 0;
    if (tempPtr) temp = atof(tempPtr + 7);

    // Extract humidity
    char *hPtr = strstr(json, "\"humidity\":");
    int humidity = 0;
    if (hPtr) humidity = atoi(hPtr + 11);

    // Extract weather description
    char *dPtr = strstr(json, "\"description\":\"");
    char desc[50] = "Unknown";

    if (dPtr) {
        dPtr += 15; 
        int i = 0;
        while (dPtr[i] != '"' && i < 49) {
            desc[i] = dPtr[i];
            i++;
        }
        desc[i] = '\0';
    }

    printf("\n=== REAL-TIME WEATHER for %s ===\n", city);
    printf("Condition   : %s\n", desc);
    printf("Temperature : %.1f °C\n", temp);
    printf("Humidity    : %d %%\n", humidity);
    printf("================================\n");
}

int main() {
    char city[100];

    while (1) 
    {
        printf("\nEnter city (or 'exit' to quit): ");
        scanf("%s", city);

        if (strcmp(city, "exit") == 0) break;

        getWeather(city);
    }
    return 0;
}