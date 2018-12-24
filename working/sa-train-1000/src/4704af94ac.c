#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_4[88];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 3;                            // Tag.BODY
    entity_2 = 90;                           // Tag.BODY
    if(entity_2 < entity_3){                 // Tag.BODY
    entity_2 = 99;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 96;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'd';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_2;                    // Tag.POINTER_DEC
    char entity_6[99];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 91;                           // Tag.BODY
    char *entity_5 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6[entity_9] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER