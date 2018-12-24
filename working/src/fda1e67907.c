#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_1[62];                       // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    entity_0 = 45;                           // Tag.BODY
    entity_9 = 99;                           // Tag.BODY
    char entity_5[60];                       // Tag.BODY
    if(entity_8 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 95;                           // Tag.BODY
    entity_5[entity_0] = 'm';                // Tag.BUFWRITE_TAUT_SAFE
    }                                        // Tag.BODY
    entity_1[entity_8] = 'Y';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER