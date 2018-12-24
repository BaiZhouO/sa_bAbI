#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[81];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_3 = 44;                                       // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 1;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 99; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_8;                                // Tag.POINTER_DEC
    char entity_2[64];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char *entity_7 = (char *)(entity_0 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 64;                                       // Tag.BODY
    entity_2[entity_6] = 'f';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER