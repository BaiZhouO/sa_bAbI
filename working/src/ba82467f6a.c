#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[41];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 15;                                       // Tag.BODY
    if (entity_7 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 29;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 26; entity_9 < entity_7; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_9] = 'U';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                                       // Tag.POINTER_DEC
    entity_2 = &entity_9;                                // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_2 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER