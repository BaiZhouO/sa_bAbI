#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_1[7];                        // Tag.BODY
    char entity_8[59];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = 24;                           // Tag.BODY
    char entity_0[43];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_6 = 32;                           // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 64;                           // Tag.BODY
    if(entity_3 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 13;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'w';                // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_9] = 'D';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_3] = '8';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER