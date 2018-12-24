#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_0[39];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_2 = 64;                           // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 62;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_5] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER