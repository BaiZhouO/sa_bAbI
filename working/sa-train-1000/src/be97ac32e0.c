#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_4 = 1;                            // Tag.BODY
    char entity_9[48];                       // Tag.BODY
    entity_7 = 41;                           // Tag.BODY
    entity_2 = 60;                           // Tag.BODY
    entity_9[entity_2] = 'K';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[42];                       // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    entity_7 = 27;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 2;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'q';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_7;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_1 = (char *)(entity_5 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 15;                           // Tag.BODY
    char entity_0[21];                       // Tag.BODY
    entity_0[entity_3] = 'x';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER