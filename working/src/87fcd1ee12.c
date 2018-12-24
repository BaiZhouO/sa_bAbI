#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_7;                            // Tag.BODY
    char entity_3[17];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_9 = 84;                           // Tag.BODY
    if(entity_7 < entity_9){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 68;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_7] = 'Z';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER