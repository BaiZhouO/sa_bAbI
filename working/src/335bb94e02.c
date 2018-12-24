#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = 62;                                       // Tag.BODY
    char entity_6[56];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 0;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 77; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                                       // Tag.POINTER_DEC
    entity_5 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_5 + 1);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER