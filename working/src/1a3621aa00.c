#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_1[57];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = 1;                            // Tag.BODY
    entity_4 = 50;                           // Tag.BODY
    if (entity_5 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 29;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_7 < entity_5){              // Tag.BODY
    entity_7++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = 'G';                // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER