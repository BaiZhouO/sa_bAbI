#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    char entity_1[87];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_9 = 1;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_7 = 1;                            // Tag.BODY
    entity_6 = 60;                           // Tag.BODY
    char entity_2[88];                       // Tag.BODY
    if(entity_6 < entity_7){                 // Tag.BODY
    entity_6 = 52;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 72;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_6] = 'W';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_6;                    // Tag.POINTER_DEC
    entity_2[entity_9] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;                            // Tag.BODY
    char *entity_0 = (char *)(entity_3 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[35];                       // Tag.BODY
    entity_4 = 17;                           // Tag.BODY
    entity_5[entity_4] = 'f';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER