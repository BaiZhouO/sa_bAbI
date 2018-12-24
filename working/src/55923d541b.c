#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_1[75];                                   // Tag.BODY
    entity_2 = 3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    for(entity_0 = 96; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                       // Tag.POINTER_DEC
    entity_9 = &entity_0;                                // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_9 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER