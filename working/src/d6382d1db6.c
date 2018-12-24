#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    entity_5 = 98;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[99];                       // Tag.BODY
    entity_4 = 44;                           // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    entity_5 = 17;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'X';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_5;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_7 = 16;                           // Tag.BODY
    char *entity_1 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[68];                       // Tag.BODY
    entity_3[entity_7] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    char entity_2[44];                       // Tag.BODY
    entity_6 = 49;                           // Tag.BODY
    entity_2[entity_6] = 'o';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER