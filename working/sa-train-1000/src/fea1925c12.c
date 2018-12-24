#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    char entity_5[23];                                  // Tag.BODY
    entity_0 = 78;                                      // Tag.BODY
    for(entity_3 = 4; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_5[entity_3] = 'G';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                                      // Tag.POINTER_DEC
    entity_9 = &entity_3;                               // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_9 + 2);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER