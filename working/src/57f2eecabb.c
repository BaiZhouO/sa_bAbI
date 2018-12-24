#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_1[93];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_4 = 30;                           // Tag.BODY
    entity_9 = rand();                       // Tag.BODY
    if(entity_9 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 14;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_9] = 'U';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_9;                    // Tag.POINTER_DEC
    char entity_5[83];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char *entity_8 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 51;                           // Tag.BODY
    entity_7 = 76;                           // Tag.BODY
    char entity_2[49];                       // Tag.BODY
    entity_5[entity_7] = 't';                // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_3] = 'm';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER