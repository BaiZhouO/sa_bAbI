#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 5;                            // Tag.BODY
    char entity_5[5];                        // Tag.BODY
    entity_8 = 29;                           // Tag.BODY
    if(entity_8 < entity_3){                 // Tag.BODY
    entity_8 = 58;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 81;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 's';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    char entity_1[88];                       // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    int entity_2;                            // Tag.BODY
    entity_2 = 49;                           // Tag.BODY
    entity_1[entity_2] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER