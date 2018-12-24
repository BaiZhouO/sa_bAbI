#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    entity_4 = 31;                           // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_9[68];                       // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    entity_5 = 57;                           // Tag.BODY
    if (entity_6 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 30;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_5 < entity_6){              // Tag.BODY
    entity_5++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = 'u';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_5;                    // Tag.POINTER_DEC
    char entity_2[66];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_8 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 64;                           // Tag.BODY
    entity_2[entity_3] = 'l';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER