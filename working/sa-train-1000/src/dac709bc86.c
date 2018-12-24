#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[92];                                   // Tag.BODY
    entity_9 = 89;                                       // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 51; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = '7';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_3;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_8 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER