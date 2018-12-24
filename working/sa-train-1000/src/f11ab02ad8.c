#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_7[52];                       // Tag.BODY
    entity_3 = 31;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    char entity_1[88];                       // Tag.BODY
    entity_9 = 71;                           // Tag.BODY
    if(entity_8 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 54;                           // Tag.BODY
    entity_7[entity_9] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_1[entity_8] = '4';                // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    char entity_5[61];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_4 = 50;                           // Tag.BODY
    entity_5[entity_4] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER