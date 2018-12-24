#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char entity_9[56];                       // Tag.BODY
    entity_1 = 7;                            // Tag.BODY
    entity_5 = 64;                           // Tag.BODY
    if(entity_5 < entity_1){                 // Tag.BODY
    entity_5 = 35;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 76;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_5] = '2';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER