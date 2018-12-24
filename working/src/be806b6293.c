#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_8[51];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_9 = 20;                                       // Tag.BODY
    if (entity_0 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 87; entity_7 < entity_0; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'p';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_7;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_3 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER