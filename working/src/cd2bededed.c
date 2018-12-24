#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_9[80];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_8[43];                       // Tag.BODY
    entity_4 = 98;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[25];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_2 = 77;                           // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_5 = 35;                           // Tag.BODY
    entity_7 = 97;                           // Tag.BODY
    entity_1[entity_4] = 'V';                // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_2 < entity_5){                 // Tag.BODY
    entity_2 = 49;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9[entity_7] = 'Z';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_2] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER