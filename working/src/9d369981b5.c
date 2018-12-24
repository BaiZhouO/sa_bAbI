#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_5[89];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 22;                                       // Tag.BODY
    char entity_4[23];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_9 = 14;                                       // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 3;                                        // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_3] = 'v';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 98; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_1;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER