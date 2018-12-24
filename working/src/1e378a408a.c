#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_3[86];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_1[69];                       // Tag.BODY
    entity_7 = 80;                           // Tag.BODY
    entity_4 = 35;                           // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 14;                           // Tag.BODY
    if(entity_2 < entity_7){                 // Tag.BODY
    entity_2 = 66;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_4] = 'V';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_2] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER