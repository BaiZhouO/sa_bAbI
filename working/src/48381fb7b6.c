#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_9[15];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_8 = 68;                           // Tag.BODY
    char entity_1[19];                       // Tag.BODY
    entity_2 = 5;                            // Tag.BODY
    entity_7 = 3;                            // Tag.BODY
    if(entity_2 < entity_8){                 // Tag.BODY
    entity_2 = 46;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_2] = '1';                // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_7] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER