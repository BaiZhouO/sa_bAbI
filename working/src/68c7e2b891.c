#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    char entity_1[64];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_2 = 97;                           // Tag.BODY
    if(entity_7 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 3;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_7] = '4';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER