#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_0[49];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_4 = 51;                                       // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 72;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 29; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = '6';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                                       // Tag.POINTER_DEC
    entity_7 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_7 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER