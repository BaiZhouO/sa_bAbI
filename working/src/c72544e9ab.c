#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    char entity_0[18];                       // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    entity_8 = 24;                           // Tag.BODY
    char entity_2[27];                       // Tag.BODY
    if(entity_5 < entity_3){                 // Tag.BODY
    entity_5 = 41;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2[entity_8] = 'a';                // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 51;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER