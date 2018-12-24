#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_7[35];                       // Tag.BODY
    char entity_2[99];                       // Tag.BODY
    entity_5 = 67;                           // Tag.BODY
    entity_6 = 8;                            // Tag.BODY
    entity_1 = 32;                           // Tag.BODY
    if(entity_1 < entity_5){                 // Tag.BODY
    entity_1 = 59;                           // Tag.BODY
    entity_7[entity_6] = 'k';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_1 = 36;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_1] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER