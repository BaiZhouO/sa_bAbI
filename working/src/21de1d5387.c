#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_8 = 9;                            // Tag.BODY
    char entity_6[20];                       // Tag.BODY
    char entity_0[24];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 87;                           // Tag.BODY
    entity_0[entity_8] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 22;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_1] = 'E';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_5 = (char *)(entity_9 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER