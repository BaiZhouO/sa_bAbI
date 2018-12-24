#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[92];                       // Tag.BODY
    entity_3 = 34;                           // Tag.BODY
    entity_4 = 27;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    entity_3 = 55;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = '2';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_5[36];                       // Tag.BODY
    entity_1 = 24;                           // Tag.BODY
    entity_9 = 61;                           // Tag.BODY
    char entity_0[15];                       // Tag.BODY
    entity_0[entity_9] = 'k';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'l';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER