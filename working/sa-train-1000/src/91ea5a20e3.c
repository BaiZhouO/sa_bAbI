#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_0;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_0 = 45;                           // Tag.BODY
    char entity_6[84];                       // Tag.BODY
    entity_4 = 12;                           // Tag.BODY
    if(entity_0 < entity_4){                 // Tag.BODY
    entity_0 = 59;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 24;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_0] = 'i';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_0;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    entity_5 = 62;                           // Tag.BODY
    char *entity_2 = (char *)(entity_7 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_9[26];                       // Tag.BODY
    entity_9[entity_5] = 'Q';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER