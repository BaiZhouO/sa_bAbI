#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_0 = 94;                           // Tag.BODY
    entity_9 = 30;                           // Tag.BODY
    char entity_6[12];                       // Tag.BODY
    if(entity_9 < entity_0){                 // Tag.BODY
    entity_9 = 75;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 0;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_9] = 'B';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_9;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER