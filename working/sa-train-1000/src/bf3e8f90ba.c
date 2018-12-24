#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_5[74];                       // Tag.BODY
    entity_4 = 90;                           // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    if(entity_1 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 64;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_1] = 'q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER