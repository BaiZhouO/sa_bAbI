#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_7 = 14;                           // Tag.BODY
    char entity_9[10];                       // Tag.BODY
    entity_4 = 6;                            // Tag.BODY
    if (entity_6 < entity_7){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 61;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_4 < entity_6){              // Tag.BODY
    entity_4++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_4;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_0 = 14;                           // Tag.BODY
    char entity_5[66];                       // Tag.BODY
    char *entity_8 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[41];                       // Tag.BODY
    entity_3[entity_0] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 36;                           // Tag.BODY
    entity_5[entity_1] = 'E';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER