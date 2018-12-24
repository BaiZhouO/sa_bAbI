#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    char entity_2[16];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_4 = 93;                           // Tag.BODY
    entity_3 = 23;                           // Tag.BODY
    if(entity_4 < entity_3){                 // Tag.BODY
    entity_4 = 2;                            // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 43;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_4] = 'c';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER