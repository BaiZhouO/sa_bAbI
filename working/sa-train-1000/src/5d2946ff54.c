#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    char entity_1[9];                        // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 69;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if(entity_8 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 16;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_8] = 'S';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_8;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_6 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_0 = 50;                           // Tag.BODY
    char entity_9[1];                        // Tag.BODY
    entity_9[entity_0] = 'z';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER