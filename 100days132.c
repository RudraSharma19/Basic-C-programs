// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight light = GREEN;

    if(light == RED) {
        printf("Stop\n");
    } else if(light == YELLOW) {
        printf("Wait\n");
    } else if(light == GREEN) {
        printf("Go\n");
    }

    return 0;
}
