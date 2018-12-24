#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_1[86];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_5 = 37;                           // Tag.BODY
    entity_9 = 98;                           // Tag.BODY
    if (entity_7 < entity_5){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 23;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_9 < entity_7){              // Tag.BODY
    entity_9++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER