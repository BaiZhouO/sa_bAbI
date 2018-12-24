#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    char entity_8[55];                       // Tag.BODY
    entity_6 = 45;                           // Tag.BODY
    entity_4 = 38;                           // Tag.BODY
    char entity_2[98];                       // Tag.BODY
    if(entity_9 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 86;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_9] = 'o';                // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    entity_5 = 36;                           // Tag.BODY
    char *entity_7 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_0[22];                       // Tag.BODY
    entity_0[entity_5] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_4] = 'M';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER