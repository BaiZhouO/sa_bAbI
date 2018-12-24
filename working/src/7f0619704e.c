#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_7[61];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_8 = 74;                           // Tag.BODY
    char entity_0[37];                       // Tag.BODY
    entity_6 = 30;                           // Tag.BODY
    entity_4 = 87;                           // Tag.BODY
    if(entity_8 < entity_4){                 // Tag.BODY
    entity_8 = 27;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_8] = 't';                // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_6] = 'd';                // Tag.BUFWRITE_TAUT_SAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_8;                    // Tag.POINTER_DEC
    int entity_2;                            // Tag.BODY
    char *entity_3 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_2 = 80;                           // Tag.BODY
    char entity_5[98];                       // Tag.BODY
    entity_5[entity_2] = '9';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER