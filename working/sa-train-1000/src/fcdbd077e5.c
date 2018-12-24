#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_1[83];                       // Tag.BODY
    char entity_4[32];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    entity_2 = 76;                           // Tag.BODY
    entity_6 = 62;                           // Tag.BODY
    entity_1[entity_2] = '6';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_0 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_0;                    // Tag.POINTER_DEC
    char entity_7[43];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char *entity_3 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5 = 24;                           // Tag.BODY
    entity_7[entity_5] = '2';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER