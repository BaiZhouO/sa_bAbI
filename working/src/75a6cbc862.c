#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_6[70];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_8 = 7;                            // Tag.BODY
    entity_9 = 50;                           // Tag.BODY
    if(entity_8 < entity_9){                 // Tag.BODY
    entity_8 = 74;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_8] = 'w';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_8;                    // Tag.POINTER_DEC
    char entity_2[74];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_0[91];                       // Tag.BODY
    char *entity_1 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7 = 2;                            // Tag.BODY
    entity_2[entity_7] = '1';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 66;                           // Tag.BODY
    entity_0[entity_5] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER