#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_6 = 15;                           // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_2 = 58;                           // Tag.BODY
    char entity_4[74];                       // Tag.BODY
    char entity_1[50];                       // Tag.BODY
    entity_8 = 89;                           // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    if (entity_5 < entity_2){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4[entity_8] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 92;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_6 < entity_5){              // Tag.BODY
    entity_6++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'p';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_6;                    // Tag.POINTER_DEC
    char entity_9[14];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char *entity_3 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 72;                           // Tag.BODY
    entity_9[entity_7] = 'l';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER