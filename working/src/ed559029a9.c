#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    char entity_0[42];                       // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_2 = 1;                            // Tag.BODY
    entity_9 = 33;                           // Tag.BODY
    if(entity_2 < entity_9){                 // Tag.BODY
    entity_2 = 27;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 30;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_2] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER