#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_3 = 29;                           // Tag.BODY
    char entity_6[69];                       // Tag.BODY
    if(entity_7 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 88;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_7] = 'L';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER