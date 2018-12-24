#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_0[15];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_9 = 16;                           // Tag.BODY
    if(entity_4 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 28;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_4] = 'P';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_4;                    // Tag.POINTER_DEC
    int entity_3;                            // Tag.BODY
    entity_3 = 20;                           // Tag.BODY
    char entity_8[77];                       // Tag.BODY
    char *entity_5 = (char *)(entity_1 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_3] = 'L';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER