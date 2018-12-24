#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_5[41];                                   // Tag.BODY
    entity_0 = 40;                                       // Tag.BODY
    if (entity_4 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 68;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 58; entity_9 < entity_4; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'V';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER