#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    entity_5 = 52;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_6[91];                                   // Tag.BODY
    for(entity_8 = 26; entity_8 < entity_5; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'W';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_8;                                // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER