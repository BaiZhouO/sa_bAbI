#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_4[43];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 11;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 41;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 83; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_9] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                                       // Tag.POINTER_DEC
    entity_3 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_3 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER