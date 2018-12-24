#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_5[69];                       // Tag.BODY
    entity_8 = 10;                           // Tag.BODY
    if(entity_4 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 8;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_4] = 'q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_4;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char entity_2[6];                        // Tag.BODY
    char entity_0[98];                       // Tag.BODY
    entity_3 = 0;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_9 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 38;                           // Tag.BODY
    entity_2[entity_1] = 'T';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_3] = 'r';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER