#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_6[22];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_2[60];                       // Tag.BODY
    entity_7 = 13;                           // Tag.BODY
    entity_4 = 56;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 6;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_0] = 'L';                // Tag.BUFWRITE_COND_SAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_0;                    // Tag.POINTER_DEC
    entity_6[entity_4] = 'N';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_9 = (char *)(entity_5 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER