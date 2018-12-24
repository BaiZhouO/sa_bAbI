#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[3];                        // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_6[86];                       // Tag.BODY
    entity_4 = 55;                           // Tag.BODY
    entity_3 = 49;                           // Tag.BODY
    if(entity_9 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 36;                           // Tag.BODY
    entity_6[entity_4] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_0[entity_9] = 'T';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    int entity_8;                            // Tag.BODY
    entity_8 = 75;                           // Tag.BODY
    char entity_7[11];                       // Tag.BODY
    entity_7[entity_8] = 'B';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER