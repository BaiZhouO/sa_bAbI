#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[53];                       // Tag.BODY
    entity_2 = 64;                           // Tag.BODY
    entity_5 = 10;                           // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    entity_5 = 39;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 42;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'W';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_5;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    char *entity_4 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[95];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 65;                           // Tag.BODY
    entity_3 = 35;                           // Tag.BODY
    char entity_0[13];                       // Tag.BODY
    entity_0[entity_7] = 'g';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9[entity_3] = 'v';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER