#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_0[88];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_4 = 16;                           // Tag.BODY
    if(entity_7 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 95;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_0[entity_7] = 'l';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER