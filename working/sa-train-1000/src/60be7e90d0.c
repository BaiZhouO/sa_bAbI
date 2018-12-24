#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_9[11];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_0 = 1;                                        // Tag.BODY
    if (entity_2 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 18;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 62; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_5] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_1 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER