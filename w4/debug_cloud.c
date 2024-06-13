#include <stdio.h>

struct cloud {
    double height;
    enum cloud_type type;
};

enum levels {
    LOW = 500,
    MID = 2000,
    HIGH = 6000
}

enum cloud_type {
    FOG,
    CUMULO,
    ALTO,
    CIRRO
}

int cloud_type_count(enum cloud_type type, struct cloud clouds[10], 
                     int count);

int main(void) {
    struct cloud sky[10];

    printf("Enter some clouds:\n");
    // Scan in some clouds
    int index = 0;
    while (scanf("%lf", &sky[index].height) == 1) {

        // Determine the type of cloud based on it's height
        if (sky[index].height < HIGH) {
            sky[index].type = CIRRO;
        } else if (sky[index].height < MID) {
            sky[index].type = ALTO;
        } else if (sky[index].height < LOW) {
            sky[index].type = CUMULO;
        } else {
            sky[index].type = FOG;
        }

    }

    // Print out the total for each cloud
    printf("\nCLOUDS\n");
    printf("There are %d fog clouds\n", cloud_type_count(FOG, sky[10], index));
    printf("There are %d cumulo clouds\n", cloud_type_count(CUMULO, sky[10], index));
    printf("There are %d alto clouds\n", cloud_type_count(ALTO, sky[10], index));
    printf("There are %d cirro clouds\n", cloud_type_count(CIRRO, sky[10], index));

    return 0;
}

int cloud_type_count(enum cloud_type type, struct cloud clouds[10], 
                            int count) {
    
    int total = 0;

    // Find all the clouds with that type
    for (int i = 0; i < count; i++) {
        if (type == type) {
            total++;
        }
    }

    return total;
}

